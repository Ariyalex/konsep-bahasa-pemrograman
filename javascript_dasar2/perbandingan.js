var foo;

foo = 9 < 12;
console.log(foo); // true

foo = 5 < 5;
console.log(foo); // false

foo = 5 <= 5;
console.log(foo); // true

foo = 8 != 12;
console.log(foo); // true

foo = 5 == 12;
console.log(foo); // false

foo = 15 === 15;
console.log(foo); // true

foo = 0.3 === 3e-1;
console.log(foo); // true

foo = 'a' < 'b';
console.log(foo); // true

foo = 'a' < 'A';
console.log(foo); // false

foo = 'reva' < 'revika';
console.log(foo); // true

foo = false < true;
console.log(foo); // true

foo = 'joni' == 12;
console.log(foo); // false