#include <iostream>
using namespace std;

float toCelcius(float farenheit) {
    return (5.0/9.0) * (farenheit - 32);
}

int main () {
    //set a farenheit value
    float f_value = 98.8;

    //call the function with fatenheit value
    float reult = toCelcius(f_value);

    //print the farenheit value
    cout << "Farenheit: " << f_value << endl;

    //print the result
    cout << "convert to celcius: " << reult << endl;

    return 0;
}