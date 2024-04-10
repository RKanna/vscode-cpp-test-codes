#include <iostream>
using namespace std;

void overloadingFunction(int num1, int num2)
{
    int total;
    total = num1 + num2;

    cout << "Its a Integer Total : " << total << endl;
}
void overloadingFunction(double num1, double num2)
{
    double total;
    total = num1 + num2;
    cout << "Its a Double Total : " << total << endl;
}

int main(){
    overloadingFunction(10.6, 15.45);
    overloadingFunction(5, 10);
    return 0;
}

//Here, function name is same, see the calling in main function, its called with different 
//argument. argument is integer or double based on its data type then its associated function will be executed.