#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

struct Data
{
    int num;
    double f_num;
    string string_variable;
};    //Here, I created a Structure of Data

class TestClass
{
    private:
    //used Data from struture
    vector<tuple<Data>> data_vector;      // Its a tuple, Created Structure Data also a tuple(3 variables) so I just used Data in vector


    public:
    Data firstInstance;
    void TestFunction() {
    //  firstInstance.num = 10;
    //  firstInstance.f_num = 56.43;
    //  firstInstance.string_variable = "Hi, How are you";

    //  data_vector.push_back(make_tuple(firstInstance));
    //     displayFunction();

    cout << "Enter a Num(Integer) value : " << endl;
    cin >> firstInstance.num;
    cout << "Enter a Double value with Decimal Point : " <<  endl;
    cin >> firstInstance.f_num;
    cout << "Enter a String value : " << endl;
    cin >> firstInstance.string_variable;
    data_vector.push_back(make_tuple(firstInstance));  // if it is a Tuple then use make_tuple,
                                                       // if its a Pair then use make_pair
    displayFunction();

    }

    void displayFunction() {
        cout << "Its a Data available in the Tuple : \n" << firstInstance.num << "\n" << firstInstance.f_num << "\n" << firstInstance.string_variable << endl;
    }

};



int main() {
    TestClass TestObject;
    TestObject.TestFunction();
    return 0;
}