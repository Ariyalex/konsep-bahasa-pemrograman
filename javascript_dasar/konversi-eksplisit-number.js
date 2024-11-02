const strNumber = "123";
const strFloat = "3.14";
const strBoolean = "true";

const numFromString = Number(strNumber);
const floatFromString = Number(strFloat);
const booleanFromString = Boolean(strBoolean);

console.log(numFromString); // 123
console.log(floatFromString); // 3.14

// cek tipe data
console.log(typeof numFromString); // number
console.log(typeof floatFromString); // number

console.log("=====================================");

// quiz 5
const floatParseint = parseInt(strFloat);
const floatParsefloat = parseFloat(strFloat);

console.log(floatParseint); // 3
console.log(floatParsefloat); // 3.14