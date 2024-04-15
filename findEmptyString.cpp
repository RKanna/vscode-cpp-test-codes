#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

void findEmptyStringFunc() {

    string str;
    cout << "Enter the String : " << endl;
    getline(cin, str);
    if(str.length() == 0){
          cout << "The string is empty" << endl;
    }else {
        cout << "The String is not empty: " << str << endl;
    }

}

int main() {
    findEmptyStringFunc();
    return 0;
}