#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string s0;
    string s1 {"Banana"};
    string s2 {"Apple"};
    string s3 {"kiwi"};
    string s4 {"Orange"};
    string s5 {s4};
    string s6 {s1, 0, 3};
    string s7 {10, 'X'};

    // cout << s0 << endl;
    // cout << s0.length() << endl;

    //Initialization 

    cout << "\nInitialization" << "\n..........." << endl;
    cout << "S1 Initialized to : " << s1 << endl;
    cout << "S2 Initialized to : " << s2 << endl;
    cout << "S3 Initialized to : " << s3 << endl;
    cout << "S4 Initialized to : " << s4 << endl;
    cout << "S5 Initialized to : " << s5 << endl;
    cout << "S6 Initialized to : " << s6 << endl;
    cout << "S7 Initialized to : " << s7 << endl;
    return 0;
}