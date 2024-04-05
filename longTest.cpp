#include <iostream>

using namespace std;

int main() {
    int data_test {38283};

    int test_int {48};

    float test_float {55.98};

    long assign;

    assign = data_test;

    //assigning int value to long data type variable assign works, 
    // but its not work viceversa, because int can't store too much digits

    cout << assign << endl;
    return 0;
}