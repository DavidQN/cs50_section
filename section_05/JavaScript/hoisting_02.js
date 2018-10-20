// JavaScript Hoisting
//
// Hoisting works a little differently for variables. Hoisting for variables actually
// only hoists the variable declaration and not the assignment. The assignment gets assigned
// at the original line it is assigned. This should give us an error!

console.log(x);

let x = 10;

/**
 * Lets take a look at how JavaScript sees this:
 *
 * let x;
 *
 * console.log(x)
 *
 * x = 10;
 *
 */
