#include <iostream>
using namespace std;


void whileLoopFun() {

    //simple While Loop Test Function
     
     int num;
    cout << "Enter the Num value" << endl;
     cin >> num;
     
     while(num > 0) {
        cout << num << endl;
        --num;
     }
     cout << "BlastOff" << endl;
}

int main() {
    whileLoopFun();
    return 0;


}