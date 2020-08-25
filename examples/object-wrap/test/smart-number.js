const { SmartNumber } = require("bindings")("smartnumber")

// Create a Smart Number
var smartNumber = new SmartNumber(10);

console.log(smartNumber.plusOne()); // 11
console.log(smartNumber.plusOne()); // 12
console.log(smartNumber.plusOne()); // 13

console.log(smartNumber.multiply(1)); // 13
console.log(smartNumber.multiply(10)); // 130

// Create another Smart Number
var smartNumber2 = new SmartNumber(20);

console.log(smartNumber2.plusOne()); // 21
console.log(smartNumber2.plusOne()); // 22
console.log(smartNumber2.plusOne()); // 23

console.log(smartNumber2.multiply(1)); // 23
console.log(smartNumber2.multiply(10)); // 230

// Test the first Smart Number again
console.log(smartNumber.multiply(1)); // 130
