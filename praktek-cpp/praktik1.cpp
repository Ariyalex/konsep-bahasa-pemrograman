#include <iostream>
using namespace std;

int main () {
    string golonganPegawai = "II";
    int gajiPokok = 50000;
    float tunjanganAnak = 0.1;
    float tunjanganSuami = 0.15;

    cout << "golongan pegawai : "<< golonganPegawai<< endl;
    cout << "gaji pokok: " << gajiPokok << endl;
    cout << "tunjangan anak: " <<  gajiPokok * tunjanganAnak << endl;
    cout << "tunjangan suami: " << gajiPokok * tunjanganSuami << endl;

    float totalGaji = gajiPokok + (gajiPokok * tunjanganAnak) + (gajiPokok * tunjanganSuami);
    cout << "total gaji: "<< totalGaji<< endl;
    return 0;
}