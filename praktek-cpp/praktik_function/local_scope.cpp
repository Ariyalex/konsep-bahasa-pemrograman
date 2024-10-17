#include <iostream>
using namespace std;

//local variable that belongs to the function
int myFunction () {
    int x = 5;

    //print the variable of x
    cout << x << endl;
}

int main() {
    myFunction();
    return 0;
}