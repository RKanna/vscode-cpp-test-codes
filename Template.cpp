#include <iostream>
#include <string>
using namespace std;

//Creating a Template of typename T
template<typename T>
//Its a Template Function
T myMax (T a, T b){
    return (a>b) ? a : b;
}

template<typename S>

void AddFunction(S r, S h){            //Void function so no need a return statement.
    if(r == h){
        cout << "Both numbers are equal" << endl;
    }else if(r>h){
        cout << r << " is greater than " << h << endl;
    }else {
        cout << h << " is greater than " << r << endl;
    }
}

int main() {
    cout << "The Max Value is : " << myMax<int>(5,6) << endl;
    cout << "The Max value is : " << myMax<char>('F', 'N') << endl;
    cout << "The Max value is : " << myMax<string>("String", "BigString") << endl;
    AddFunction<int>(10, 10);
    AddFunction<int>(5, 2);
    AddFunction<char>('T', 'S');
    AddFunction<char>('M', 'M');
    return 0;
}