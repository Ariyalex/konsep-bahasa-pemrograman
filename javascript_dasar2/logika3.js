var foo = "duniailkom" || "javascript";
console.log(foo); // duniailkom

var foo = "duniailkom" && "javascript";
console.log(foo); // javascript

var foo = true || "javascript";
console.log(foo); // true

var foo = false || "javascript";
console.log(foo); // javascript

var foo = "Javascript" && false;
console.log(foo); // false

var foo = false && "Javascript";
console.log(foo); // false

var foo = false || false && true || "Javascript";
console.log(foo); // Javascript

var foo = true || false && true || "Javascript";
console.log(foo); // true