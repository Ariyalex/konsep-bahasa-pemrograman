#include <iostream>
#include <limits>
using namespace std;

double volume(double sisi) {
    return sisi * sisi * sisi;
}

double luas(double sisi) {
    return 6 * sisi * sisi;
}

int main() {
    char menu = 'y';
    while (menu == 'y' || menu == 'Y'){
        
        cout << "Pilih menu: y = volume; n = sisi " << endl;
        cin >> menu;
        if (menu == 'y' || menu == 'Y') {
        double sisi;
        cout << "Masukkan panjang sisi kubus (cm): ";
        cin >> sisi;

        //periksa input berupa integer
        if (cin.fail()) {
            cin.clear(); //menghapus flag error pada cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //mengabaikan input yang salah
            cout << "Input harus berupa angka" << endl;
            continue;
        } 
        cout << "Volume kubus: " << volume(sisi) << " cm^3" << endl;
    } else {
        double sisi;
        cout << "Masukkan panjang sisi kubus (cm): ";
        cin >> sisi;

        //periksa input berupa integer
        if (cin.fail()) {
            cin.clear(); //menghapus flag error pada cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //mengabaikan input yang salah
            cout << "Input harus berupa angka" << endl;
            continue;
        } 
        cout << "Luas permukaan kubus: " << luas(sisi) << " cm^2" << endl;
    }

        cout << "kembali ke menu? (y/n): ";
        cin >> menu;
    }

}