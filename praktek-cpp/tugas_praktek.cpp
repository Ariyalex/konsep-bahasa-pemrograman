#include <iostream>
using namespace std;

int main () {
	string namaMahasiswa;
	int nilai1, nilai2, nilai3, nilai4, nilai5, rataRata;

	cout << "Masukkan nama mahasiswa: ";
	cin >> namaMahasiswa;
	cout << "Masukkan nilai 1: ";
	cin >> nilai1;
	cout << "Masukkan nilai 2: ";
	cin >> nilai2;
	cout << "Masukkan nilai 3: ";
	cin >> nilai3;
	cout << "Masukkan nilai 4: ";
	cin >> nilai4;
	cout << "Masukkan nilai 5: ";
	cin >> nilai5;

	rataRata = (nilai1 + nilai2 + nilai3 + nilai4 + nilai5) / 5;

	cout << "mahasiswa yang bernama "<< namaMahasiswa << " memperoleh nilai rata - rata tugas "<< rataRata<< endl;

	if (nilai1<nilai2 && nilai1<nilai3 && nilai1<nilai4 && nilai1<nilai5) {
		cout << "nilai terkecil adalah "<< nilai1<< endl;
	} else if (nilai2<nilai1 && nilai2<nilai3 && nilai2<nilai4 && nilai2<nilai5) {
		cout << "nilai terkecil adalah "<< nilai2<< endl;
	} else if (nilai3<nilai1 && nilai3<nilai2 && nilai3<nilai4 && nilai3<nilai5) {
		cout << "nilai terkecil adalah "<< nilai3<< endl;
	} else if (nilai4<nilai1 && nilai4<nilai2 && nilai4<nilai3 && nilai4<nilai5) {
		cout << "nilai terkecil adalah "<< nilai4<< endl;
	} else if (nilai5<nilai1 && nilai5<nilai2 && nilai5<nilai3 && nilai5<nilai4) {
		cout << "nilai terkecil adalah "<< nilai5<< endl;
	};

	if (nilai1>nilai2 && nilai1>nilai3 && nilai1>nilai4 && nilai1>nilai5) {
		cout << "nilai terbesar adalah "<< nilai1<< endl;
	} else if (nilai2>nilai1 && nilai2>nilai3 && nilai2>nilai4 && nilai2>nilai5) {
		cout << "nilai terbesar adalah "<< nilai2<< endl;
	} else if (nilai3>nilai1 && nilai3>nilai2 && nilai3>nilai4 && nilai3>nilai5) {
		cout << "nilai terbesar adalah "<< nilai3<< endl;
	} else if (nilai4>nilai1 && nilai4>nilai2 && nilai4>nilai3 && nilai4>nilai5) {
		cout << "nilai terbesar adalah "<< nilai4<< endl;
	} else if (nilai5>nilai1 && nilai5>nilai2 && nilai5>nilai3 && nilai5>nilai4) {
		cout << "nilai terbesar adalah "<< nilai5<< endl;
	};

	return 0;
	 
}