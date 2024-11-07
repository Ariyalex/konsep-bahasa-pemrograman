var foo;

foo = '' == '0';
console.log(foo); // false

foo = 0 == '';
console.log(foo); // true

foo = 0 == '0';
console.log(foo); // true

foo = false == 'false';
console.log(foo); // false

foo = false == '0';
console.log(foo); // true

foo = false == undefined;
console.log(foo); // false

foo = false == null;
console.log(foo); // false

foo = null == undefined;
console.log(foo); // true

foo = ' \t\r\n ' == 0;
console.log(foo); // true
