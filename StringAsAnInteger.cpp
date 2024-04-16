#include <iostream>
using namespace std;


void StringAsAnInteger(string num) {
    //   string num = "6";
      int val = stoi(num);
      // for checking type id, that is really it is a Integer or not
        cout << typeid(val).name() << endl;  
        cout << val << endl;
}

int main() {
    string input;
    cout << "Enter the String value(Number only)" << endl;
    cin >> input;
    StringAsAnInteger(input);
    return 0;

}