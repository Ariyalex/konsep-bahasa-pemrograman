#include <iostream>
#include <string>
using namespace std;

void input_string(string &nama, string &nim, string &umur, string &asal) {
    cout << "Masukkan nama: ";
    getline(cin, nama);
    cout << "Masukkan NIM: ";
    getline(cin, nim);
    cout << "Masukkan umur: ";
    getline(cin, umur);
    cout << "Masukkan asal: ";
    getline(cin, asal);
}

string balik(const string &data) {
    string dibalik;
    for (int i = data.length() - 1; i >= 0; i--) {
        dibalik += data[i];
    }
    return dibalik;
}


int main () {
    string nama, nim, umur, asal;
    input_string(nama, nim, umur, asal);
    cout << endl;
    cout << "Nama dibalik: " << balik(nama) << endl;
    cout << "NIM dibalik: " << balik(nim) << endl;
    cout << "Umur dibalik: " << balik(umur) << endl;
    cout << "Asal dibalik: " << balik(asal) << endl;
    return 0;
}