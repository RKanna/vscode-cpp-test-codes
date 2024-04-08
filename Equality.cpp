#include <iostream>
using namespace std;

void testFunction (int arg1, double arg2) {
  
  if(arg1 == arg2){
    cout << "Both the values are equal" << endl;

  }
  else if(arg1 != arg2 ) {
    cout << "Both the values are not equal" << endl;
  }
    
}

int main() {
    testFunction(123, 123);
   return 0;
}