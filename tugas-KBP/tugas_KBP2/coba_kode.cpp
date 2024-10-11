#include <iostream>
#include <string>
using namespace std;

bool cariNama(int jumlahOrang, string namaDicari) {
    string nama;

    for (int i =0; i < jumlahOrang; i++) {
        cout << "masukkan nama orang ke-" << (i +1) << ": ";
        cin >> nama;

        if (nama == namaDicari) {
            return true;
        }
    }
    return false;
}

int main () {
    int jumlahOrang;
    string namaDicari;

    cout << "masukkan jumlah orang: ";
    cin >> jumlahOrang;

    cout << "masukkan nama yang dicari: ";
    cin >> namaDicari;

    bool ditemukan = cariNama(jumlahOrang, namaDicari);

    if (ditemukan) {
        cout << "nama  " << namaDicari << " ditemukan dalam daftar!" << endl;
    } else {
        cout << "nama " << namaDicari << " tidak ditemukan dalam daftar." << endl;
    }
    return 0;
}