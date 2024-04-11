#include <iostream>
using namespace std;

int main() {
    
    int *int_ptr {nullptr};
    int val {10};
    int_ptr = &val;
    cout << int_ptr << endl;
    cout << val << endl;

    cout << *int_ptr << endl;            //Dereferencing pointer

    return 0;
}
