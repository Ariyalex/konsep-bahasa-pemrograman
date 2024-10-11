#include <iostream>
#include <sstream>
#include <vector>
#include <map>
using namespace std;

vector<string> pecahKalimat (const string& kalimat) {
    stringstream ss(kalimat); //membuat stream dari string kalimat
    string kata;
    vector<string> kataperkata; //menyimpan kata-kata

    //memecah string menjadi kata-kata
    while (ss >> kata) {
        kataperkata.push_back(kata);
    }

    return kataperkata;
}

// fungsi untuk mengelompokkan kata berdasarkan panjangnya dan menghitung jumlah kata
map<int, pair<vector<string>, int>> kelompokKataBerdasarPanjang(const vector<string>& kataperkata) {
    map<int, pair<vector<string>, int>> kelompok; // map untuk meyimpan kata berdasat panjangnya

    //itersi setiap kata
    for (const string& kata : kataperkata) {
        int panjang = kata.size(); //menghitung panjang kata
        kelompok[panjang].first.push_back(kata);//kelompok kata berdasarkan panjang
        kelompok[panjang].second++; // menghitung jumlah kata
    }
    return kelompok;
}

int main () {
    string kalimat;
    cout << "masukkan kalimat: ";
    getline(cin, kalimat); // mengambil seluruh kalimat dari user

    //memecah kalimat menjadi kata-kata
    vector<string> kataperkata = pecahKalimat(kalimat);

    //mengelompokkan kata berdasarkan panjangnya dan menghitung jumlah kata
    map<int, pair<vector<string>, int>> hasilKelompok = kelompokKataBerdasarPanjang(kataperkata);

    //menampilkan hasil
    cout << "penjumlahan kata berdasarkan panjang dan jumlah kata: " << endl;
    for (const auto& pasangan : hasilKelompok) {
        int panjang = pasangan.first;
        const vector<string>& kataKelompok = pasangan.second.first;
        int jumlahKata = pasangan.second.second;

        cout << "panjang " << panjang << ": ";
        for (const string& kata : kataKelompok) {
            cout << kata << " ";
        }
        cout << "(jumlah: " << jumlahKata << " kata)" << endl;
    }

    return 0;
}