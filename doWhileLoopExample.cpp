#include <iostream>
using namespace std;


void doWhileExample() {

    char selectSwitch {};

    do
    {
        int test1 {}, test2 {};
        cout << "Its Just a Addition" << endl;
        cout << "Enter the Numbers for Addition" << endl;
        cin >> test1 >> test2;
        cout << "Total is : " << test1 + test2 << endl;
        cout << "Calculate another one?" << endl;
        cin >> selectSwitch;
    } while (selectSwitch == 'Y' || selectSwitch == 'y');
    
}

int main() {
    doWhileExample();
    return 0;

}