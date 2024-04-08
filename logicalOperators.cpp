#include <iostream>
using namespace std;

void logicalTest() {

    int num1 {0}, num2 {0};
    char char1, char2;
    cout << "Logial Operators usage" << endl;

    cin >> num1 >> num2;
     
     cin >> char1 >> char2;

     if(num1 >= 5 && char2 == 's') {
       cout << "Test Case 1 num1 and char2 both are correct" << endl;
     }else if(num2 == 2 || char1 == 'a') {
        // in c++ use single quote for characters, using double quote leads to errors
        cout << "Test case 2 correct and executed" << endl;
     }
}

int main() {
    logicalTest();
    return 0;
}