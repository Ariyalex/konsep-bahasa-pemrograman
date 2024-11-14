function salam(nama) {
    if (nama === undefined) {
        nama = "Pengunjung";
    } else {
        nama = nama;
    }
    return `Halo, ${nama}!`
}

console.log(salam()); // Output: Halo, Pengunjung!
console.log(salam("Budi")); // Output: Halo, Budi!