#include <iostream>
#include <string>
#include <map>
using namespace std;

//list barang dan harga
void barangDanHarga(map<string, int>& barang) { //deklarasikan map barang
    
    //menambahkan item ke dalam map barang
    barang["buku"] = 10000;
    barang["pensil"] = 2000;
    barang["pulpen"] = 3000;
    barang["penghapus"] = 1000;
    barang["penggaris"] = 5000;

    cout << "Daftar barang dan harga"<< endl;

    //mencetak barang dan harga
    for (const auto& item : barang) {
        cout << item.first << " : " << item.second << endl;
    }
    cout << endl;
}

void inputNIlai(const map<string, int>& barang) {
    //deklarasi variabel untuk menyimpan input
    string input_barang;
    int kuantitas;
    int total = 0;
    map<string, int> subtotal;
    
    //looping konfirmasi lanjut belanja
    char lanjut = 'y';
    while (lanjut == 'y' || lanjut == 'Y') {
        cout << "Masukkan nama barang: ";
        cin >> input_barang;

        cout << "Jumlah barang: ";
        cin >> kuantitas;
        
        //jika barang tidak ditemukan
        if (barang.find(input_barang) == barang.end()) {
            cout << "Barang tidak ditemukan" << endl;
        } else {
            total += barang.at(input_barang) * kuantitas; //menghitung total belanja
            subtotal[input_barang] += barang.at(input_barang) * kuantitas; //menghitung subtotal belanja
        }

        //konfirmasi lanjut belanja
        cout << "Lanjutkan belanja? (y/n): ";
        cin >> lanjut;
    }

    //mencetak subtotal
    cout << "subtotals" << endl;
    for (const auto& item : subtotal) {
        cout << item.first << " : " << item.second << endl;
    }
    //mencetak total belanja
    cout << endl;
    cout << "Total belanja: " << total << endl;
}

int main() {
    map<string, int> barang; //deklarasi map barang
    barangDanHarga(barang); //memanggil fungsi barangDanHarga
    inputNIlai(barang); //memanggil fungsi inputNIlai
    
    return 0;
}