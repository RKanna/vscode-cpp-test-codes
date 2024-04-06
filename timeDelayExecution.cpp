#include <ctime>
#include <iostream>

int delay(int milliseconds) {
    clock_t goal = milliseconds + clock();
    while(goal>clock());
    return 1;
}

int main() {
    delay(2*1000);
    cout << "Hello" << endl;
    return 0;
}