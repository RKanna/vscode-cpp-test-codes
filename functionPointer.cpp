#include <iostream>
using namespace std;


int addFunction(int x, int y) {
     return x+y;
}

void pointerFunction(int (*pointFun)(int, int),int x, int y) 
//its a int pointerFun that accepts two (int,int) variable, 
//also that function itself having three arguments 
//pointers and variable x and y
{ 
    int result = (*pointFun)(x,y);
    cout << "Result is : " << result << endl;
}

int main() {
    int (*add)(int,int) = &addFunction;
    pointerFunction(add, 6,3); 
    return 0;
}