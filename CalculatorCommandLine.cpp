#include <iostream>
#include <math.h>
#include <ctype.h>
#include <cctype>
#include <cstring>
using namespace std;

struct Calc {
    int num1, num2;
    
};

class Calculator
{
private:

public:
    void basicCalcFunctions() {
        int option;
        bool conditionalSwitch = false;
        while (!conditionalSwitch)
        {
            cout << "Hi, Its a Calculator" << endl;
         cout << "1.Addition" << endl;
         cout << "2.Subtraction" << endl;
         cout << "3.Multiplication" << endl;
         cout << "4.Division" << endl;
         cout << "5.Modulo Division" << endl;
         cout << "Input Selection Number [Q - Exit] : " << endl;
         cin >> option;
         if(static_cast<char>(option) == 'q')
         {
             conditionalSwitch = true;
         }
         
         else
         if(cin.fail()){
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid option Please select a Number" << endl;
         }
         else 
         {
            doCalculation(option);
         } 
         
         
        }
        
        
    }

    void CommonDisplayFunction(int& val1, int& val2) //but i used address of val1, val2 here,
    {
            cout << "Enter first Value" << endl;
            cin >> val1;
            cout << "Enter second Value" << endl;
            cin >> val2;
    }

    void doCalculation(int option){  
        int val1, val2;              //I declared val1, val2 within a doCalculation
        
        switch (option)
        {
        case 1:
            CommonDisplayFunction(val1, val2);   //Here, I am calling that function with val1,val2 directly
            int AdditionValue;
            AdditionValue = val1 + val2;
            cout << "Added Value is : " << AdditionValue << endl;
            break;
        case 2:
            CommonDisplayFunction(val1, val2);
            int Subtraction;
            Subtraction = val1 - val2;
            cout << "Subtracted Value is : " << Subtraction << endl;
            break;
        case 3:
            CommonDisplayFunction(val1, val2);
            int Multiplication;
            Multiplication = val1 * val2;
            cout << "Multiplicated Value is : " << Multiplication << endl;
            break;
        case 4:
            CommonDisplayFunction(val1, val2);
            int Division;
            Division = val1 / val2;
            cout << "Divided Value is : " << Division << endl;
            break;
        case 5:
            CommonDisplayFunction(val1, val2);
            int moduloOperation;
            moduloOperation = val1 / val2;
            cout << "Remainder Value is : " << moduloOperation << endl;
            break;
        default:
            break;
        }
    }
    
};

int main() {
    Calculator Obj_calc;
    Obj_calc.basicCalcFunctions();
    return 0;
}