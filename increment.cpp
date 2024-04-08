#include <iostream>
using namespace std;


void postincrementFunction(int count) {
    int result = count++ + 10;
    cout << "The value of count is : " << result << endl;
    cout << "The current value of count is : " << count << endl;
}

void postdecrementFunction(int count){
    int result = count--;
    cout << "The value of count is : " << result << endl;
}

void preIncrementFunction(int count) {
    int result = ++count + 10;
    cout << "Pre increment value of count is : " << result << endl;
}
void preDecrementFunction(int count) {
    int result = --count;
    cout << "Pre Decrement value of count is : " << result << endl;
}

int main() {
   postincrementFunction(10);
   postdecrementFunction(10);
   preIncrementFunction(10);
   preDecrementFunction(10);
   return 0;
}