#include <iostream>
using namespace std;

//Comparing Two Pointers

int main() {
    
    string s1 {"rohan"};
    // string s2 {"lekshon"};
    string s2 {"rohan"};

    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};

    cout << (p1 == p2) << endl;  //false
    cout << (p3 == p1) << endl;  //true

    cout << (*p1 == *p2) << endl;   //true or 1 if both strings are equal
    cout << (*p3 == *p1) << endl;   //true or 1 if both strings are equal
    return 0;
}