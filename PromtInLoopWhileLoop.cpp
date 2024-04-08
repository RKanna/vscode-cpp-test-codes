#include <iostream>
using namespace std;

void whileLoopPromptIn() {

    int num;

    cout << "Enter the Number less than 100" << endl;
        cin >> num;
 //loop will previle always when number is entered beyond its range 100
    while(num >= 100){
        cout << "Enter the Number less than 100" << endl;
        cin >> num;

    }
    cout << "Thanks" << endl;
}

int main() {
    whileLoopPromptIn();
    return 0;
}