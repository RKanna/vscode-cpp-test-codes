#include <iostream>
using namespace std;

void forloopFun() {
     for(int i {1}; i<=100; i++) {

        cout << i;
        if(i % 10 == 0) {   //Execution -> 1 to 9 it will give space as output because its not equal to zero
        //but once i value reaches 10 then its modulo value is 0 then it moves on next line 
            cout << endl;
        }else if (i % 10 != 0)
        {
            cout << " ";
        }
        
     }
}
int main() {
   forloopFun();
   return 0;
}