#include <iostream>
using namespace std;

//Here i am using unsigned size for loop through the Array

void functionWithArrayArgument(int numberArray [], size_t size){
    for(size_t i{0}; i<size; i++)
    {      // size_t is a unsigned int for safety purpose to avoid warnings
    cout << numberArray[i] << endl;
    }
}

int main () {
    int myNumberArray[6] ={3,5,1,7,2,10};
    functionWithArrayArgument(myNumberArray, 6);
    return 0;
}

///////////////////////////////////////////////////
