const number = 123;
const string = 'Dicoding';
const empty = null;

const boolFromNumber = Boolean(123);
const boolFromString = Boolean(string);
const boolFromEmpty = Boolean(empty);

console.log(boolFromNumber); // true
console.log(boolFromString); // true
console.log(boolFromEmpty); // false

console.log("=====================================");
// quiz 6
// cek tipe data
console.log(typeof boolFromNumber); // boolean
console.log(typeof boolFromString); // boolean
console.log(typeof boolFromEmpty); // boolean