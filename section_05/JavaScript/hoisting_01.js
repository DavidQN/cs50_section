// JavaScript Hoisting
//
// Hoisting is JavaScript's default behavior of moving all declarations to the top
// of the current scope (to the top of the current script or the current function).

// We can call the main() function before it has been declared, because the function
// declaration is actually hoisted to the top of the file during runtime.
main();

function main() {
  console.log("hey there");
}
