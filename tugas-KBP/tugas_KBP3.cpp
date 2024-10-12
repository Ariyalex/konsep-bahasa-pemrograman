#include <iostream>
#include <string>
#include <map>
#include <iomanip>
using namespace std;

//list barang dan harga
void barangDanHarga(map<string, int>& barang) { //deklarasikan map barang
    
    //menambahkan item ke dalam map barang
    barang["buku"] = 10000;
    barang["pensil"] = 2000;
    barang["pulpen"] = 3000;
    barang["penghapus"] = 1000;
    barang["penggaris"] = 5000;
    barang["tinta"] = 15000;
    barang["kertas"] = 500;
    barang["lem"] = 4500;

    cout << left << setw(15) << "Nama Barang" << right << setw(10) << "Harga" << endl; //header untuk tabel daftar barang
    cout << string(25, '-') << endl;

    //mencetak barang dan harga
    for (const auto& item : barang) {
        cout << left <<setw(15) << item.first << right << setw(10) << item.second << endl;
    }
    cout << string(25, '=') << endl;
}

 //fungsi input nilai dan menghitung barang yang dibeli
void inputNIlai(const map<string, int>& barang) {
    //deklarasi variabel untuk menyimpan input
    string input_barang;
    int kuantitas;
    int total = 0;
    map<string, pair<int, int>> subtotal; //menyimpan first(barang) dan second(isi pair adalah first(kuantitas) dan second(harga) dari map)
    
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
            subtotal[input_barang].first += kuantitas; //menghitung kuantity setiap barang
            subtotal[input_barang].second += barang.at(input_barang) * kuantitas; //menghitung subtotal belanja
        }

        //konfirmasi lanjut belanja
        cout << "Lanjutkan belanja? (y/n): ";
        cin >> lanjut;
    }

    cout << string(35, '=') << endl;
    //mencetak kuitansi
    cout << "\nKuitansi Belanja\n";
    cout << left << setw(15) << "Nama Barang" << setw(10) << "Qty" << setw(10) << "Subtotal" << endl;
    cout << string(35, '-') << endl;

    //perulangan iterasi mencetak kuitansi
    for (const auto& item : subtotal) {
        cout << left << setw(15) << item.first
        << setw(10) << item.second.first //mencetak qty
        << right << setw(10) << item.second.second << endl; //emncetak subtotal
    }
    cout << string(35, '-') << endl;

    //mencetak total belanja
    cout << endl;
    cout << left << setw(15) << "Total belanja" << right << " :Rp." << total << endl;
    cout << left << setw(15) << "Pajak 10%" << right << " :Rp." << total * 0.1 << endl;
    cout << left << setw(15) << "Grand total"<< right << " :Rp." << total + (total * 0.1);
}

int main() {
    map<string, int> barang; //deklarasi map barang
    barangDanHarga(barang); //memanggil fungsi barangDanHarga
    inputNIlai(barang); //memanggil fungsi inputNIlai

    return 0;
}