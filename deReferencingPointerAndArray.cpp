#include <iostream>
using namespace std;

int main() {

    int scores[] {100,90,80};

    int *int_ptr {scores};

    cout << int_ptr << endl;

    cout << *(int_ptr + 2) << endl;           //Pointer offset Notation

    cout << int_ptr[2] << endl;               //Pinter subscrit Notation
    
        


    return 0;

}