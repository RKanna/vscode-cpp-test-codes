#include <iostream>
using namespace std;

int main() {
    
    int x {10};
    int y {20};
    int *int_ptr {&x};

    cout << *int_ptr;

    return 0;
}