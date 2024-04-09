#include <cmath>
#include <iostream>
using namespace std;

//For C-Math Demo Program.


void mathFunction() {

    double num {};

    cout << "Its a Mathematical Demo Program" << endl;
    cout << "Enter the Value" << endl;

    cin >> num;

    cout << "Square Root of Value : " << sqrt(num) << endl;

    cout << "Cube Root of Value : " << cbrt(num) << endl;

    cout << "Floor Value : " << floor(num) << endl;

    cout << "Round Value : " << round(num) << endl;

    double power {};

    cout << "Enter the Power to raise value" << endl;

    cin >> power;

    cout << "The Power Value is : " << pow(num, power) << endl;

}

int main() {
    mathFunction();
    return 0;
}