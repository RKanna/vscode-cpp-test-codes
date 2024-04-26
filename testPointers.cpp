#include <cctype>
#include <iostream>
#include <utility>
#include <vector>
#include <thread>
using namespace std;


class Person {
    
    struct Address {
        string city, state, doorNo, place;
    };

    struct Details {
        int age;
        string name;
        Address *addressPTR;
    };

    Details newDetails;
    Address newAddress;

    private:
    vector<pair<Details, Address>> fullDetails;

    public:
    void run(){
        newDetails.addressPTR = &newAddress;   
        cout << "Enter some Details" << endl;
        cout << "Age : ";
        cin >> newDetails.age;
        cout << "Name : ";
        cin >> newDetails.name;
        cout << "Enter Full Address separated by spaces: " << endl;
        cin >> newDetails.addressPTR->doorNo;
        cin >> newDetails.addressPTR->place;
        cin >> newDetails.addressPTR->city;
        cin >> newDetails.addressPTR->state;
        fullDetails.push_back(make_pair(newDetails, newAddress));
        cout << "Thank you Your Details are pushed" << endl;

        cout << "Do you want to see the pushed Details ? type[y/n]" << endl;
        char selection;
        cin >> selection;

        if(selection == 'y')
        {
            // cout << newDetails.name << "\n" << newDetails.age << "\n" << newDetails.addressPTR->doorNo << "," << newDetails.addressPTR->place << "," << newDetails.addressPTR->city << ",\n" << newDetails.addressPTR->state << endl;
            for(const auto val:fullDetails)
            {
             cout << val.first.name << " " << static_cast<int>(val.first.age) << " " << val.first.addressPTR->doorNo << " " << val.first.addressPTR->place << " " << val.first.addressPTR->city << " " << val.first.addressPTR->state<< " " << endl;
            
            }
            helperFunction();
        }
        else if(selection == 'n') 
        {
           helperFunction();
        }
    }
void helperFunction() {
         cout << "Enter new user details" << endl;
         run();
    }
    
};

int main()
{
   Person object_1;
   object_1.run();
   return 0;
}