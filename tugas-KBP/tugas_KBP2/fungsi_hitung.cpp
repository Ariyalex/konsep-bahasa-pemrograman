#include <iostream>
using namespace std;

int hitung( int a,int b) {
    return a + b;
}

int main () {
    int angka1, angka2, hasil;
    cout << "masukkan angka pertama: ";
    cin >> angka1;
    cout << "masukkan angka kedua: ";
    cin >> angka2;
    
    hasil = hitung(angka1, angka2);

    cout << "hasil penjumlahan: " << hasil << endl;

    return 0;
}