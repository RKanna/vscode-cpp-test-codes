#include <iostream>
using namespace std;

//Simple C++ program to invert the Array elements
//For example if Array is [5,2,1] then it will return [-5,-2,-1]
//if array is [-4,3,6] then it will return [4,-3,-6]
void invertArrayFromUserInput() {
    int arr[5] = {5,4,3,9,1};

    for(auto val:arr) {    //This for loop is very usefull to display array elements easily
        if(val == +val){
          val = -val;
          cout << val << endl;
        }else if(val == -val) {
           val = +val;
           cout << val << endl;
        }
    }
}

int main() {
    invertArrayFromUserInput();
    return 0;
}

