#include <stdio.h>
using namespace std;


int main() {
//    cout<<"Hello world!"<<endl;
//    string sambutan = "Selamat belajar c++";
//    string nama = "Ariya Duta";
//    long long nim = 23106050032;
//
//    cout<<sambutan<<endl<<nama<<endl<<nim<<endl;

    int a, b, c;

    printf("masukkan nilai a: "); 
    scanf("%d" , &a);
    printf("masukkan nilai b: "); 
    scanf("%d" , &b);
    
    c = a + b;

    printf("hasil dari penjumlahan = %d", c);
    
    return 0;
}