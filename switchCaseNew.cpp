#include <iostream>
using namespace std;


void SwitchCaseFun() {
    string variable {};
   cout << "ENTER THE DAY IN UPPERCASE" << endl;
    cin >> variable;

    switch (variable)
    {
    case 'SUNDAY':
        cout << "Its a Sunday"<< endl;
        break;
    case 'MONDAY':
        cout << "Its a Monday" << endl;
        break;
    
    default:
        cout << "Its a normal day" << endl;
        break;
    }
}

int main() {
    SwitchCaseFun();
    return 0;
}