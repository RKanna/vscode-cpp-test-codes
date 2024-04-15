#include <iostream>
using namespace std;

void negativeInteger(){
    int x, result;
    cout << "Please Enter the Positive Integer" << endl;
    cin >> x;
    if(x < 0) {
     cout << "The Entered Number is negative itself" << endl;
    }else if(x>0) {
     int val = -x;
       cout << "The Negative value is : " << val << endl;
    }

}

int main() {
     negativeInteger();
     return 0;
}