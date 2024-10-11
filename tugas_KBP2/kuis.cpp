#include <iostream>
using namespace std;

int basisPangkat(int x, int n) {
    if (n == 0) {
        return 1;
    } else {
        return x * basisPangkat(x, n - 1);
    }
    return 0;
}

int main (int x, int n) {
    cout << "masukkan basis: ";
    cin >> x ;
    cout << "masukkan pangkat : ";
    cin >> n ;
    cout << "hasil: " << basisPangkat(x, n) << endl;
    return 0;
}

