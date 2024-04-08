#include <iostream>
using namespace std;

void testOddorEven() {

    int arrayTest[] = {4,7,9,3,10};

    int n = 5;

    for(int i=0; i<n; i++)
    {

       if(arrayTest[i] % 2 == 0) {
        cout << "The value is Even number : " << arrayTest[i] << endl;
       }else if(arrayTest[i] != 0) {
        cout << "The Value is Odd number : " << arrayTest[i] << endl;
       }
    }
}

int main() {
testOddorEven();
    return 0;
}