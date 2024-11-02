//null
let message = null;
console.log(message); // null

//undefined
let pesan;
console.log(pesan); // undefined
pesan = undefined; // memberikan nilai undefined pada variabel pesan secara esplisit
console.log(pesan); // undefined

// quiz 4
const name1 = {first: 'Ahmad', last: null};
const name2 = {first: 'DAhmad', last: undefined};
console.log(JSON.stringify(name1)); //null muncul sebagai nilai eksplisit yang menunjukkan last tidak memiliki nilai
console.log(JSON.stringify(name2)); //JSON tidak menampilkan variabel atau properti yang belum didefinisikan