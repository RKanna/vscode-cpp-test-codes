#include <iostream>

using namespace std;

int main() {

    double meter {0};
    double feet {3.28084};
    cout << "Its a Converter to convert Meter to Feet" << endl;
    cout << "Enter Meter Value" << endl;
    cin >> meter;
    cout << "Your Meter Value is : " << meter << endl;
    cout << "Converted Feet Value : " << meter * feet << endl;

    return 0;

}