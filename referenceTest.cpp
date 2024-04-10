#include <iostream>
using namespace std;

//Pointer Test Program;

  int x {0};
void testReferenceFunction(int &x) {

    //Demo Pointer working
    
    cout << &x << " : " << "Intial value of x is : " << x << endl;
    int y {10};
    int *score_ptr(nullptr);
    score_ptr = &y;
    cout << "Current Value of Y is : " << y << endl;
    cout << "address of Y is : " << &y << endl;
    cout << "" << score_ptr;

    int *another_ptr(nullptr);
    double val {56.34};
    // another_ptr = &val;
    another_ptr = static_cast<double>(&val);
}

int main() {
    int a = 5;
    testReferenceFunction(a);
    return 0;
}

