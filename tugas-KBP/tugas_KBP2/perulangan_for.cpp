#include <iostream>
using namespace std;

int man () {
    int total = 0;

    for (int i = 1; i <= 10; i++) {
        total += i;
    }

    cout << "jumlah total dari 1 hingga 10 adalah: " << total << endl;
    return 0;
}