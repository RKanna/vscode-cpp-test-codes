#include <iostream>
using namespace std;

void OddOREvan(int num) {
    if(num % 2 == 0){
        cout << num << " is Evan Number" << endl;
    }else if(num % 2 != 0) {
        cout << num << " is Odd Number" << endl;
    }else if(num == 0) {
        cout << num << " is Evan Number" << endl;
    }
}

int main() {
    int input;
    cout << "Enter a Number To check weather it is Odd or Evan ? " << endl;
    cin >> input;
    OddOREvan(input);
    return 0;
}