//

#include <iostream>
using namespace std;

int add(int a, int b) {return a+b;}
int sub(int a, int b) {return a-b;}
int multiply(int a, int b) {return a*b;}
int division(int a, int b) {return a/b;}
int moduloDiv(int a, int b) {return a%b;}

int (*get_char(char operation))(int, int) {
    switch (operation)
    {
    case '+':
        return &add;
        break;
    case '-':
        return &sub;
        break;
    case '*':
        return &multiply;
        break;
    case '/':
        return &division;
        break;
    case '%':
        return &moduloDiv;
        break;
    default:
        break;
    }
}


int main() {
    int (*operate)(int, int) = get_char('+');
    int result = (*operate)(10,50);
    cout << "The result is : " << result << endl;
    return 0;
}