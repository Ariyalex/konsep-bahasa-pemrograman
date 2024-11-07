var angka;

angka = 4 > 3;
console.log(angka); // true

angka = 4 >= 3;
console.log(angka); // true

angka = 4 == 3;
console.log(angka); // false

angka = 4 === 3;
console.log(angka); // false

angka = 4 !== 3;
console.log(angka); // true

angka = 10 < "10";
console.log(angka); // false

angka = 10 > "10";
console.log(angka); // false

//dalam javascript, operator perbandingan mengubah dipe data angka string menjadi angka intger
//sehingga 10 < "10" menjadi 10 < 10 yang hasilnya false
//dan 10 > "10" menjadi 10 > 10 yang hasilnya false