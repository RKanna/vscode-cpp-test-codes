#include <iostream>
using namespace std;

void functionTwo(int &x, int y, int z) {
     x += y+z;
     //
}

int functionOne(int a, int b) {
    int result {};
    result = a+b;   //30
    functionTwo(result, a, b);   // 30, 10, 20
    return result;
}

int main(){
    int x {10};
    int y {20};
    int z {};   //30
    z = functionOne(x, y);   // 30
    cout << z << endl;
    return 0;
};

//needed some clarification, that is flow of function call and operations.