#include <iostream>
using namespace std;


void convertToDouble(int value){
    double convertedValue = value;
    cout << "The Converted Value is : " << convertedValue << endl;
    cout << typeid(convertedValue).name();  //for finding the data type of variable convertedValue
}


int main() {

   convertToDouble(17);
   return 0;

}