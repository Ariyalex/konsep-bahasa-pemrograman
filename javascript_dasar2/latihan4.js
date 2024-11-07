var perbandingan;

perbandingan = 10 <= 10;

var logika = perbandingan && false;
console.log(logika); // false

logika = perbandingan || false;
console.log(logika); // true

logika = !perbandingan;
console.log(logika); // false