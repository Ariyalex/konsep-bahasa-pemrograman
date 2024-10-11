#include <iostream>
#include <string>
using namespace std;

string gabungan() {
    string tanaman[3] = {"Pisang", "Apel", "Jeruk"};
    string hewan[3] = {"Kucing", "Anjing", "Kelinci"};
    string kendaraan[3] = {"Mobil", "Motor", "Sepeda"};

    string kombinasi;
    for (int i =0; i < 3; i++) {
        kombinasi += tanaman[i] + " ";
        kombinasi += hewan[i] + " ";
        kombinasi += kendaraan[i] + " ";
    }
    return kombinasi;
}

int main () {
    string hasil = gabungan();
    cout << hasil << endl;
}