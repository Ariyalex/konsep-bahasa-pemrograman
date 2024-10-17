#include <iostream>
using namespace std;

void myFunction () {
    cout << "I just got executed!" << endl;
}

int main() {
    myFunction(); //call the function
    myFunction();
    myFunction();
    return 0;
}