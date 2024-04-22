#include <algorithm>
#include <iostream>
#include <locale>
#include <string>
#include <vector>
#include <algorithm>    //for remove_if() builtin function
using namespace std;

class AddressBook {

    struct Data {
    int serial = 0;
    string name;
    string DoorNo;
    string streetName, place, city;
    int pincode;

};

    public:
     vector<Data> vector_data;
     static int serialCounter;
     int option;


     void pushFunction() {

        cout << "Address Book" << endl;
        
        cout << "1.Add Address to the DB " << endl;

        cout << "2.View Address of the DB " << endl;

        cout << "3.Edit Address of the DB" << endl;

        cout << "4.Delete Address of the DB " << endl;

        cout << "5.Exit" << endl;

        cin >> option;

        cin.ignore();

        if(option == 1){
            addAddressFunction();
        }else if(option == 2) {
            viewAddressFunction();
        }else if(option == 3){
            editAddressFunction();
        }else if(option == 4) {
            deleteAddressFunction();
        }else if(option == 5){
            cout << "Exiting from Loop" << endl;
            return;
        }else {
            cout << "Invalid Option" << endl;
            pushFunction();
        }

     }

     void addAddressFunction() {
        char flagChar;
        cout << "Do you really want to add Address ?[Type : Y/N] " << endl;
        cin >> flagChar;
        cin.ignore();
        while (flagChar == 'Y' || flagChar == 'y') {
            Data newEntry;
        cout << "Enter Name" << endl;
        getline(cin, newEntry.name);
        cout << "Enter Door Numner" << endl;
        getline(cin, newEntry.DoorNo);
        cout << "Enter Street Name" << endl;
        getline(cin, newEntry.streetName);
        cout << "Enter Place" << endl;
        getline(cin, newEntry.place);
        cout << "Enter City " << endl;
        getline(cin, newEntry.city);
        cout << "Enter your Pincode " << endl;
        cin >> newEntry.pincode;
        newEntry.serial = ++serialCounter;
        vector_data.push_back(newEntry);
        cout << "Do you want to add Another Address ? [Type : Y/N] " << endl;
        cin >> flagChar;
        if(flagChar == 'n' || flagChar == 'N'){
            cout << "Thanks for adding Address to our DB" << endl;
            cout << "Your Address Addedd successfully" << endl;
        }
        }
        pushFunction();
     }

     void displayAddressListWithName() {
         if(vector_data.size() == 0){
            cout << "No Address to show" << endl;
        }else {
            for_each(vector_data.begin(), vector_data.end(), [](const Data& val){
                cout << val.serial << " : " << val.name << endl;
                
            });
        
        }
     }
 
    void viewAddressFunction() {
        if(vector_data.empty()){
            cout << "There is no Data within the Vector to View " << endl;
            pushFunction();
          }
        int localSerial;
        displayAddressListWithName();
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
        if(vector_data.empty()){
            cout << "There is no Data within the Vector to Edit " << endl;
            pushFunction();
          }
        int editSerial;
         displayAddressListWithName();
          cout << "Enter a serial Number for editing the Address details" << endl;
          cin >> editSerial;
          
          bool found = false;
          char check;
                for(Data& val : vector_data){
                   if(editSerial == val.serial){
                    cout << "Do you want to edit name ? [Y/N] " << endl;
                    cin >> check;
                    cin.ignore();
                    if(check == 'y' || check == 'Y'){
                        cout << "Enter New Name : " << endl;
                        getline(cin, val.name);
                        cout << "Enter Door No : " << endl;
                        getline(cin, val.DoorNo);
                        cout << "Enter Street Name : " << endl;
                        getline(cin, val.streetName);
                        cout << "Enter Place : " << endl;
                        getline(cin, val.place);
                        cout << "Enter City : " << endl;
                        getline(cin, val.city);
                        cout << "Enter Pincode : " << endl;
                        cin >> val.pincode;
                    }else if(check == 'n' || check == 'N'){
                        cout << "Enter Door No : " << endl;
                        // cin.ignore();
                        getline(cin, val.DoorNo);
                        cout << "Enter Street Name : " << endl;
                        // cin.ignore();
                        getline(cin, val.streetName);
                        cout << "Enter Place : " << endl;
                        // cin >> val.place;
                        // cin.ignore();
                        getline(cin, val.place);
                        cout << "Enter City : " << endl;
                        // cin >> val.city;
                        // cin.ignore();
                        getline(cin, val.city);
                        cout << "Enter Pincode : " << endl;
                        cin >> val.pincode;
                        cout << "Address Updated Successfully in a Row of " << val.serial << endl; 
                    }
                    // displayAddressListWithName();
                    pushFunction();
                   }
                }
    }


   void deleteAddressFunction() {
    if(vector_data.empty()){
            cout << "There is no Data within the Vector to Delete " << endl;
            pushFunction();
          }
         displayAddressListWithName();
         int deleteInput;
         cout << "Enter the Serial Number of Address You want to delete? : " << endl;
         cin >> deleteInput;
         for(Data& val : vector_data){
            if(deleteInput == val.serial){

                //Lambda Function :
                //[ capture clause ] (parameters) -> return-type  
                      //   {   
                     //definition of method   
                    //} 
            //   used here
        //            ||
           //         ||
              //      \/

                vector_data.erase(remove_if(vector_data.begin(), vector_data.end(),
                                     [deleteInput](const Data& val) 
                                     { 
                                        return val.serial == deleteInput; 
                                     }),
                      vector_data.end());

                      cout << "Address Deleted Successfully in the Row of " << val.serial << endl;
                
            }
         }
         pushFunction();
    }
     

};

int AddressBook::serialCounter = 0;

int main() {
    AddressBook AddressObj;
    AddressObj.pushFunction();
    return 0;
}