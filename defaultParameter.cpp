#include <iostream>
using namespace std;
// void defaultArgExample(double prod, double tax_rate);

void defaultArgExample(double prod, double tax_rate = 0.66) //Here, Default Argument tax_rate = 0.6 Provided
{
    
    double calc = prod + (prod * tax_rate);
    cout << "The final Calc is : " << calc << endl;
    return;
}
int main() {

    defaultArgExample(10);
    defaultArgExample(20, 0.95);
    return 0;

}