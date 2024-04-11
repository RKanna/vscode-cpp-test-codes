#include <iostream>
using namespace std;

int main(){
    int score {10};
    double InPercentage {30.43};
    int *int_ptr {&score};
    double *double_ptr {&InPercentage};

    int val = *(int_ptr + double_ptr);    //can't able to add because int_ptr and double_ptr
    //both are different data types so it gives compiler error.

    cout << val << endl;

    return 0;
}