var foo;

foo = true && false;
console.log(foo); // false

foo = true || false;
console.log(foo); // true

foo = !false;
console.log(foo); // true

foo = true || true && false;
console.log(foo); // true

foo = false && true || true;
console.log(foo); // true

foo = false && true || true;
console.log(foo); // true

foo = true || false || true;
console.log(foo); // true

foo = false && true && true;
console.log(foo); // false