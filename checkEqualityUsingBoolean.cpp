#include <iostream>
using namespace std;

void checkEqualityUsingBoolean() {

    int num1 {0}, num2 {0};

    cout << "Enter the two numbers" << endl;

    cin >> num1 >> num2;

    bool equal_result {false};
    bool not_equal_result {false};
 
    equal_result = num1 == num2;

    not_equal_result = num1 != num2;

    cout << boolalpha << endl;

    cout << "The results are equal : " << equal_result << endl;

    cout << "The results are notEqual : " << not_equal_result << endl;

}

int main() {
    checkEqualityUsingBoolean();
    return 0;
}