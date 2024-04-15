#include <iostream>
using namespace std;

//Challenge Program for appending a string "Do not" before every input 
//Challenge Program.

void appendString() {

    string str;
    // cin >> str;
    cout << "Enter a String : " << endl;
    getline(cin, str);
    string defaultStr = "Do Not";

    string stringOutput = defaultStr + " " + str;

    cout << stringOutput << endl;
}

int main() {
    appendString();
    return 0;
}
