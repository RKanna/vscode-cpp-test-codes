#include <iostream>
using namespace std;

     int x = 50;   //Global Variable

void scopeResolutionSample() {
     int x = 10;    //Local Variable

     cout << "The Local Variable of x value is : " << x << endl;

     cout << "The Global Variable of x value is : " << ::x << endl; //used scope Resolution operator; 
}

int main() {
    scopeResolutionSample();
    return 0;

}