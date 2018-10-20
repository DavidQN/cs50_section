let x = [1, 2, 3, 4, 5];
console.log("Type of x BEFORE adding variable y: ", typeof x);
console.log("Instance of y :", x instanceof Array);
console.log("Instance of y :", x instanceof Object);

let y = "3";
console.log("Type of y BEFORE adding variable x: ", typeof y);

let result = x + y;

console.log(result);
console.log(typeof result);
