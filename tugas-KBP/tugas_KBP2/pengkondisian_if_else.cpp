#include <iostream>
using namespace std;

int main () {
    int angka;
    cout << "masukkan angka: ";
    cin >> angka;

    if (angka % 2 == 0) {
        cout << "angka genap" << endl;
    } else {
        cout << "angka ganjil" << endl;
    }
    return 0;
};