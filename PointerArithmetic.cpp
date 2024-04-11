//Pointer DeReferencing and Pointer Arithmetic

#include <iostream>
using namespace std;

int main() {

    int scores[] {95, 100, 54, -1};
    int *score_ptr {scores};

    while (*score_ptr != -1)
    {
        cout << *score_ptr << endl;
        score_ptr++;
    }

    return 0;
}