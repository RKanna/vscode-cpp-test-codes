//Swaping Variables using Pointers without any Temporary Variable
#include <iostream>
using namespace std;
int main() {

    int a = 5, b = 4, *p1 = &a, *p2 = &b;

    cout << "Before Swap *p1 : " << *p1 << "\t*p2 : " << *p2 << endl;
    
    *p1 = *p1 + *p2;   //here Dereferencing happening *p1 = 5+4 = 9
     
     *p2 = *p1 - *p2;  //9 is updated in *p1 so, 9 - 4 = 5

     *p1 = *p1 - *p2;  // 9 - 5 = 4

    cout << "After Swap *p1 : " << *p1 << "\t*p2 : " << *p2 << endl;
 

    return 0;
}
