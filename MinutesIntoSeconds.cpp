#include <iostream>
using namespace std;
void convertionFunction();


void convertionFunction() {
    int minutes {};   //whole integer
    int seconds {};
    cout << "Please Enter Minutes" << endl;
    cin >> minutes;
    seconds = minutes * 60;
    cout << "Converted Seconds is : " << seconds << endl;
}

int main() {
    convertionFunction();
    return 0;
}