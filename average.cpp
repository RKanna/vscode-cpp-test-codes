#include <iostream>

using namespace std;

void averageFunction() {
    int num1 {}, num2 {}, num3 {};
    cout << "Enter Three numbers separted by space" << endl;
    cin >> num1 >> num2 >> num3;
    int count {3};
    // double total = num1 + num2 + num3;
    int total = num1 + num2 + num3;
    cout << total << endl;
    double average {0.0};
    // average = total/count; 
      //here, if total is declared int then automatic type conversion happens,
    //average also convered to int, to avoid this, i declared total as double.
    average = static_cast<double>(total)/count;   
    //Line number 17, here total is integer so to convert the total to double data type
    //we using the static_cast<double>(total) 
    cout << average << endl;
}

int main() {

    averageFunction();
    return 0;

}