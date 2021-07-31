var helloWorldAddon = require("bindings")("helloworld")

// Print the text "Hell World!"
console.log(helloWorldAddon.helloWorldFunction());
