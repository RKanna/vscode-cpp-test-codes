#include <iostream>
using namespace std;

//A simple function that return the Address of the variable,
//Its geting input from user and it gives its memory address 
void FuncReturnAddress() {
    int val;
    cout << "Enter the Value : " << endl; 
    cin >> val;
    int* address;
    address = &val;
    cout << "The Address is : " << address << endl;
    //De-Referencing a Pointer;
    cout << "The value is : " << (*address) << endl;
}

int main() {
    FuncReturnAddress();
    return 0;
}