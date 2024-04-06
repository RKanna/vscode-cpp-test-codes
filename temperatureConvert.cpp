#include <iostream>

using namespace std;

int main() {

    int celsius {0};

    cout << "Celsius to Fahrenheit Converter" << endl;
    cout << "===============================" << endl;
    cout << "Enter the Celsius Value" << endl;
    cin >> celsius;
    cout << "Its Fahrenheit Value" << endl;
    cout << (celsius * 9/5) + 32 << endl;


    return 0;
}