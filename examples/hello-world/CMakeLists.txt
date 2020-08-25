cmake_minimum_required(VERSION 3.9)
set(CMAKE_CXX_STANDARD 14)

project(helloworld)

file(GLOB SOURCE_FILES "HelloWorld.cpp")

add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES} ${CMAKE_JS_SRC})
set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "" SUFFIX ".node")
target_link_libraries(${PROJECT_NAME} ${CMAKE_JS_LIB})

# Add N-API header directories to search paths
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_JS_INC})
target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_SOURCE_DIR}/node_modules/node-addon-api")

#Define N-API version to be ABI stable
add_definitions(-DNAPI_VERSION=3)