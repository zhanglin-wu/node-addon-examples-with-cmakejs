## Node.js C++ Addon Hello World Using CMake.js

### Install
```
npm install --save-dev node-addon-example-smart-number
```

### Usage
```
const { SmartNumber } = require("node-addon-example-smart-number");

const smartNumber = new SmartNumber(3);
console.log(smartNumber.plusOne()); // 4
console.log(smartNumber.multiply(4)); // 16
```
