#include <iostream>
using namespace std;

void whileLoopTestFunction() {
    while (true)
    {
        char selection {};
        cout << "Do you want this loop will continue ?";
        cin >> selection;

        if(selection == 'Y' || selection == 'y'){
            cout << "You are in Loop" << endl;
           continue;
        }
        
        else if(selection != 'Y' || selection != 'y'){
            cout << "You are out of loop" << endl;
            break;
        }

    }
    
}

int main() {
    whileLoopTestFunction();
    return 0;
}