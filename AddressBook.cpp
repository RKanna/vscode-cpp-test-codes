#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int option;

struct Data {
    int serial = 0;
    string name;
    int DoorNo;
    string streetName, place, city;
    int pincode;

};

class AddressBook {

    public:
     vector<Data> vector_data;
     static int serialCounter;


     void pushFunction() {

        cout << "Address Book" << endl;
        
        cout << "1.Add Address to the DB " << endl;

        cout << "2.View Address of the DB " << endl;

        cout << "3.Edit Address of the DB" << endl;

        cout << "4.Delete Address of the DB " << endl;

        cout << "5.Exit" << endl;

        cin >> option;

        if(option == 1){
            addAddressFunction();
        }else if(option == 2) {
            viewAddressFunction();
        }else if(option == 3){
            editAddressFunction();
        }else if(option == 4) {
            // deleteAddressFunction();s
        }else if(option == 5){
            cout << "Exiting from Loop" << endl;
            // return true;
        }else {
            cout << "Invalid Option" << endl;
            pushFunction();
        }

     }

     void addAddressFunction() {
        char flagChar;
        cout << "Do you really want to add Address ?[Type : Y/N] " << endl;
        cin >> flagChar;
        while (flagChar == 'Y' || flagChar == 'y') {
            Data newEntry;
        cout << "Enter Name " << endl;
        cin >> newEntry.name;
        cout << "Enter Door Numner" << endl;
        cin >> newEntry.DoorNo;
        cout << "Enter Street Name" << endl;
        cin >> newEntry.streetName;
        cout << "Enter Place" << endl;
        cin >> newEntry.place;
        cout << "Enter City " << endl;
        cin >> newEntry.city;
        cout << "Enter your Pincode " << endl;
        cin >> newEntry.pincode;
        newEntry.serial = ++serialCounter;
        vector_data.push_back(newEntry);
        cout << "Do you want to add Another Address ? " << endl;
        cin >> flagChar;
        }
        pushFunction();
     }
 
    void viewAddressFunction() {
        int localSerial;
        if(vector_data.size() == 0){
            cout << "No Address to show" << endl;
        }else {
            for_each(vector_data.begin(), vector_data.end(), [](const Data& val){
                cout << val.serial << " : " << val.name << endl;
                
            });
        
        }
        cout << "Enter a serial Number for viewing the Full Details" << endl;
        cin >> localSerial;
                bool found = false;
                for(const Data& val : vector_data){
                   if(localSerial == val.serial){
                    cout << "Detailed Address is : " << endl;
                    cout << "Name : " << val.name << endl;
                    cout << "Address : " << val.DoorNo << ", " << val.streetName << ", \n" << val.place << ", " << val.city << ", \n" << val.pincode << endl;
                    found = true;
                    break;
                   }
                }
                if(!found){
                    cout << "There is No address for this " << localSerial << " Serial Number" << endl;
                }
        pushFunction();
    }

    void editAddressFunction() {
        
    }
     

};

int AddressBook::serialCounter = 0;

int main() {
    AddressBook AddressObj;
    AddressObj.pushFunction();
    return 0;
}