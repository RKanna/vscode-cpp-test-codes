#include <iostream>
using namespace std;

class personDetails
{
public:
   string name;
   int age {0};
   long long rollNumber {0};  //long long only hold more digits 
   double height {0.0};

   personDetails()  //Constructor Function 
   //Constructor created using classname followed by paranthesis ()
   {
    cout << "Its a Exam Registration Demo" << endl;
    cout << "Enter the Person's Name" << endl;
    cin >> name;
    cout << "Enter the Age of the person" << endl;
    cin >> age;
    cout << "Enter the Roll-Number" << endl;
    cin >> rollNumber;
    cout << "Enter the Height " << endl;
    cin >> height;
   }

   void DisplayFunction() {
       cout << "The Person's Name is : " << name << endl;
       cout << "The Person's Age is : " << age << endl;
       cout << "The Person's Roll-Number is : " << rollNumber << endl;
       cout << "The Person's Height is : " << height << endl;
   }

    
};

int main() {
    personDetails DETAILS;
    //Don't call personDetails() because its a Constructor it will automatically
    //Executed when we creating object DETAILS.
    DETAILS.DisplayFunction();
    return 0;
}


