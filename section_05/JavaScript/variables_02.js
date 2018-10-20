let x = 3;
let y = "3";

// In JavaScript, the + operator is used for both numeric addition and string concatenation.
// When you "add" a number to a string the interpreter converts your number to a string and
// concatenates both together.
let result = x + y;

console.log("Concat number and string");
console.log(result);
console.log(typeof result);

// When you use the - operator, however, the string is converted back into a number so
// that numeric subtraction may occur.
console.log("\nSubtract a string with the number 2");
console.log(result - 2);
