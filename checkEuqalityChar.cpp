#include <iostream>
using namespace std;

void EqualityFunction() {

    char char1 {}, char2 {};

    cout << "Enter the Two characters separated by space" << endl;

    cin >> char1 >> char2;

    bool equal {false};
    bool not_equal {false};

    cout << boolalpha << endl;
    equal = char1 == char2;
    not_equal = char1 != char2;

    cout << "true if Both characters are same" << equal << endl;
    cout << "false if both characters are not same" << not_equal << endl;

    //Here, Remember C++ char datatype stores only one variable for examble "a"
    //So test with single character like "a", "a"

}

int main() {
    EqualityFunction();
    return 0;
}