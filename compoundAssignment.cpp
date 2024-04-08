#include <iostream>
using namespace std;

void compoundAssignment() {
    int test_x {0};
    int test_y {0};
    
    cout << "Enter the data of variables" << endl;
cout << "Enter the Test_X value" << endl;
    cin >> test_x;
    cout << "Enter the Test_Y value" << endl;
    cin >> test_y;

    test_y += test_x;
    cout << "The Total value is : " << test_y << endl;

    test_y -= test_x;
    cout << "The Difference value is : " << test_y << endl;

    test_y *= test_x;
    cout << "The Product value is : " << test_y << endl;

    test_y /= test_x;
    cout << "The Product Division value is : " << test_y << endl;
}

int main() {
    compoundAssignment();
    return 0;
}