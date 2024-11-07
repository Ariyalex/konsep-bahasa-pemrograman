var foo;

foo = 10 + 10 + 9;
console.log(foo); // 29

foo = '10' + 10 + 9;
console.log(foo); // 10109

foo = 10 + '10' + 9;
console.log(foo); // 10109

foo = 10 + 10 + '9';
console.log(foo); // 209