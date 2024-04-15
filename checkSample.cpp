#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

//Check if the string is lower or upper

int main() {
    char option;
    char lowerValue;
     cout << "Enter option" << endl;
     cin >> option;
     lowerValue = islower(option);
     if(lowerValue) {
        cout << "true" << endl;
     }else {
        cout << "false" << endl;
     }

    return 0;
}