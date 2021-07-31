## Node.js C++ Addon Examples Using CMake.js

### Examples

The objective of these examples is to demonstrate how to build node.js C++ addons using [CMake.js](https://github.com/cmake-js/cmake-js#readme). For each example, we can just use the following commands to build, test, and publish the addon:

```
npm install

npm run build
npm test

npm pack
npm publish
```

Complete CMake.js documentation can be found on the [CMake.js GitHub repository](https://github.com/cmake-js/cmake-js#readme).

### NAPI_VERSION

When building node.js C++ addons, it's important to specify to the build system the N-API version your code is designed to work with. With CMake.js, this information is specified in the `CMakeLists.txt` file:  

```
add_definitions(-DNAPI_VERSION=3)
```

Since N-API is ABI-stable, our N-API addon will work, without recompilation, with the N-API version we specify in `NAPI_VERSION` and all subsequent N-API versions. 

In the absence of a need for features available only in a specific N-API version, version 3 is a good choice as it is the version of N-API that was active when N-API left experimental status.

### References

- [Node.js C++ Addons](https://nodejs.org/api/addons.html#addons_c_addons)
- [Node.js C++ Addon using Napi/node-addon-api and Cmake](https://medium.com/@gauriatiq/c-native-addon-independent-of-node-js-version-using-napi-node-addon-api-and-cmake-53315582cbd1)
- [Node.js C++ Addon Examples](https://github.com/nodejs/node-addon-examples)
- [Using N-API from C++](https://github.com/nodejs/node-addon-api)
