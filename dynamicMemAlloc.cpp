#include <iostream>
using namespace std;

//Dynamic Memory Allocation using pointers

int main() {

    int *int_ptr {nullptr};
    int_ptr = new int;   // dynamic allocation

    cout << int_ptr << endl;

    delete int_ptr;    //deleting pointer memory allocation

    size_t size {0};
    double *temp_ptr {nullptr};

    cout << "How many Temps ?" << endl;
    cin >> size;
    
    temp_ptr = new double[size];   //dynamic allocation with size

    cout << temp_ptr << endl;

    delete [] temp_ptr;

    return 0;
}