#include <iostream>
#include <vector>
using namespace std;

//Need further code, Not completed;


void decimalToHexaDecimal() {
    
    vector<char> pushedData;
    int decimal = 5392;
    int newVal;

    do
    {
        newVal = decimal%16;
        pushedData.push_back(newVal);
        decimal = decimal/16;
    } while (decimal != 0);

    for(auto val: pushedData){
        cout << val;
    }
    

}

int main() {
    decimalToHexaDecimal();
    return 0;

}