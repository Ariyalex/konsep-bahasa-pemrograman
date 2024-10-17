#include <iostream>
using namespace std;

int x = 5;

void myFunction() {
    //we can access x here
    cout << x << endl;
}

int main () {
    myFunction();

    //we can also access x here
    cout << x;
    return 0;
}