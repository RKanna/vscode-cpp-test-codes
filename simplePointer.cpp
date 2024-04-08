#include <iostream>
using namespace std;


void simplePointerTestFunction() {

    int Variable = 10;

    int *pointerVariable;

    pointerVariable = &Variable; 

    cout << "The value of Variable : " << Variable << endl;
    cout << "Its Location : " << pointerVariable << endl;

}

int main() {
    simplePointerTestFunction();
    return 0;
}