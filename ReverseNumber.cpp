#include <iostream>
using namespace std;

string OuterScopeCheckingValue;

void reverseNumber(string arg) {    //Hello 
    cout << "Reverse Of Number" << endl;
     
     for(int i = arg.length() - 1; i<arg.length(); i--) {
        OuterScopeCheckingValue = arg[i];
       cout << arg[i];
       
     }
}

int main() {

    string userString {};
    cout << "Enter the String you Want to Reverse" << endl;

    cin >> userString;

    reverseNumber(userString);

    if(OuterScopeCheckingValue == userString) {
        cout << "\nThe Number is palindrome" << endl;
    }else {
        cout << "\nThe Number is Not palindrome" << endl;
    }

    return 0;
}