#include <iostream>
using namespace std;
int factorial(int n);


int main(){
    int n;
    cout << "Factorial of a Number" << endl;
    cout << "Enter a Positive Integer" << endl;
    cin >> n;
    cout << "Factorial of " << n << " is : " << factorial(n) << endl;
}

int factorial(int n) {
    if(n>1) {
        return n * factorial(n-1); // Assume n = 5
        // Then 5 * factorial(5-1) => 5 * factorial(4)
        // => 5 * 4 * factorial(4-1) => 5 * 4 * factorial(3)
        // => 5 * 4 * 3 * factorial(2-1) => 5 * 4 * 3 * 2 * factorial(1-1)
        //factorial(0) is 1 then 5 * 4 * 3 * 2 * 1;
    }else {
        return 1;
    }
}