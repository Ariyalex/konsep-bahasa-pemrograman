#include <iostream>
using namespace std;

int main () {
    string golonganPegawai;
    int gajiPokok;
    float tunjanganAnak;
    float tunjanganSuami;

    
    cout << "value golongan pegawai: ";
    cin >> golonganPegawai;

    cout << "value tunjangan anak: ";
    cin >> tunjanganAnak;

    cout << "value tunjangan suami: ";
    cin >> tunjanganSuami;

    if (golonganPegawai == "I") {
        gajiPokok = 1000000;
    } else if (golonganPegawai == "II") {
        gajiPokok = 2000000;
    } else if (golonganPegawai == "III") {
        gajiPokok = 3000000;
    }

    

    cout << "golongan pegawai: "<<  golonganPegawai<< endl;
    cout << "gaji pokok: "<<  gajiPokok<< endl;
    cout << fixed<< "tunjangan anak: "<< gajiPokok * tunjanganAnak<< endl;
    cout <<fixed << "tunjangan suami: "<< gajiPokok * tunjanganSuami<< endl;
    cout << "total gaji: " << gajiPokok + (gajiPokok * tunjanganAnak) + (gajiPokok * tunjanganSuami);

    return 0;
}