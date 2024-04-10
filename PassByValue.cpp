#include <iostream>
using namespace std;
void passByValue(int); //function prototype


void passByValue(int num) {

    num = 1000;
    
    cout << "Here value is changed........." << num << endl;
    
}

int main() {

    int num {10};
    
    cout << "Initial Value of Num before calling is : " << num << endl;
    passByValue(num);    //function calling
    cout << "Changed Value of Num After calling function is : " << num << endl;
    
    return 0;
}