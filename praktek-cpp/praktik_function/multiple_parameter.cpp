#include <iostream>
using namespace std;

void MyFunction(string fname, int age) {
    cout << fname << " Refsnes. " << age << " years old. \n";
}

int main() {
    MyFunction("Liam", 3);
    MyFunction("Jenny", 14);
    MyFunction("Anja", 30);
    return 0;
}

//lia Refsnes. 3 years old.
//Jenny Refsnes. 14 years old.
//Anja Refsnes. 30 years old.