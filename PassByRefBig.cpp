#include <iostream>
#include <cstring>
using namespace std;
void PassByRef(&num, &stringChar);

int main() {
    int number = 10,
    string str = "funny guy";
    PassByRef(number, str);
    return 0;
}

void PassByRef(&num, &stringChar){
    

}

