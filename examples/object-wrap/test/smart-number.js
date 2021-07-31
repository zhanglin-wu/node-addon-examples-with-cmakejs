const { SmartNumber } = require("bindings")("smartnumber")

// Create a Smart Number object
var smartNumber1 = new SmartNumber(10);

console.log(smartNumber1.plusOne()); // 11
console.log(smartNumber1.plusOne()); // 12
console.log(smartNumber1.plusOne()); // 13

console.log(smartNumber1.multiply(1)); // 13
console.log(smartNumber1.multiply(10)); // 130

// Create another Smart Number object
var smartNumber2 = new SmartNumber(20);

console.log(smartNumber2.plusOne()); // 21
console.log(smartNumber2.plusOne()); // 22
console.log(smartNumber2.plusOne()); // 23

console.log(smartNumber2.multiply(1)); // 23
console.log(smartNumber2.multiply(10)); // 230

// Test the first Smart Number again
console.log(smartNumber1.multiply(1)); // 130
