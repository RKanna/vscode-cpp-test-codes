#include <iostream>
using namespace std;


void reverseStringUsingPointers(){

    string s1 {"Hello"};

    string *string_ptr {&s1};
    for(size_t i = s1.length() -1; i<s1.length(); --i)
    {
      cout << (*string_ptr)[i];  //Dereferencing Pointer with looping values i
    }
         
}

int main() {
    reverseStringUsingPointers();
    return 0;

} 