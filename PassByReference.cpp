//Pass By reference

//Actual data not change, but its referenced copy will change

#include <iostream>
using namespace std;
//function prototype declarion
void passByRef(int &val);

void passByRef(int &val) {
     if(val > 100) {
        val = 50;
        cout << val << endl;
     }
}

int main() {
    int num {1000};
    cout << "Before Function calling value is : " << num << endl;
    passByRef(num);
    cout << "After Function calling value is : " << num << endl;
    return 0;
}