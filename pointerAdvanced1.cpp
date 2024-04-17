#include <iostream>
using namespace std;
// Function declaration
void *functionName(void *name);   //Function prototype

int main() {
    int number = 10;
    int *result;

    // Calling the function
    result = (int *)functionName(&number);

    // Displaying the result
    // cout << "Result: %d\n", *result;
    cout << "Result:\n" << *result << endl;

    return 0;
}

// Function definition
void *functionName(void *name) {
    // Casting the void pointer to the appropriate type
    int *input = (int *)name;

    // Manipulating the data
    *input *= 2;

    // Returning the manipulated data
    return name;
}
