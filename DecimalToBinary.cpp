#include <iostream>
#include <vector>
using namespace std;

void DecimalToBinaryConversion(int decimal) {
    vector<int> numVector;
    int newVal;
   do
   {
     newVal = decimal%2;
      numVector.push_back(newVal);
      decimal = decimal/2;
   } while (decimal != 0);
    for(auto val: numVector) {
        cout << val;
    }
}

int main() {
    cout << "Enter The Decimal Value to Convert Binary : " << endl;
    int input;
    cin >> input;
    DecimalToBinaryConversion(input);
    return 0;
}