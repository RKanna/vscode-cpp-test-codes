#include <cctype>
#include <iostream>
#include <vector>
using namespace std;

class PhoneBook {

    struct Data {
    int serial = 0;
    string contactName;
    string contactNumber;
};

    public:

    vector<Data> vector_data;

    static int serialCounter;

    char option;

    void pushFunction() {
        
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << "\t\tPhone Book" << endl;
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << "Enter Section [A-Z] (type q to quit) : " << endl;
        cin >> option;
        sectionView(option);
    }

    void sectionView(char option) {
        char firstLetter;

        if(option == 'q') {
            cout << "Exiting...." << endl;
              return;
         }
         
        else if(option >= 'a' && option <= 'z' || option >= 'A' && option <= 'Z')
         {
            // bool checkLower = islower(option);
            // bool checkUpper = isupper(option); 
              if(vector_data.empty()){
                cout << "Contacts are empty for Section " << option << endl;
              }else {
                // for(auto item:vector_data){
                //  firstLetter = toupper(item.contactName[0]);
                // }
                cout << "Contacts in " << option << "..." << endl;
                cout << "SNo\t" << "Name\t" << "Mobile" << endl;
                for(auto item:vector_data)
                {
                    firstLetter = toupper(item.contactName[0]);
                     if(toupper(option) == firstLetter){
                    cout << item.serial << ")\t" << item.contactName <<  "\t" << item.contactNumber << endl;
                   }
                //    else if(firstLetter != toupper(option) && vector_data.empty()){
                //     cout << "There is No Contacts in section" << option << endl;
                //    }
                }
              }
              AddContactOption(); 
         }
        //  else if(option == 'q') {
        //     cout << "Exiting...." << endl;
        //       return;
        //  }
    }

    void AddContactOption() {
        int select;
        cout << "Options;" << endl;
        cout << "1). Add New Contact" << endl;
        cout << "2). Dial" << endl;
        cout << "3). Go Back" << endl;
        cout << "Option : ";
        cin >> select;
        if(select == 1)
        {
          addContactsFunction();
        }
        else if(select == 2) 
        {
          dialContactsFunction();
        }
        else if(select == 3)
        {
        //    return;
        pushFunction();
        }
    }
    
     void addContactsFunction() {
        char sectionChange;
        Data newData;
        cout << "Enter Contact Name : ";
        cin >> newData.contactName;
        // if(newData.contactName[0] != option){
            if(toupper(newData.contactName[0]) != toupper(option)){
            cout << "Mismatch...Are you want to change Section?...[y/n]" << endl;
            cin >> sectionChange;
            if(sectionChange == 'y'){
                cout << "Enter Contact Number : ";
        cin >> newData.contactNumber;
        newData.serial = serialCounter++;
        vector_data.push_back(newData);
        cout << "Contact " << newData.contactName << " : " << newData.contactNumber << " added Successfully" << endl;
        pushFunction();
            }else {
            //   return;
            pushFunction();
            }
            return;
        }
        cout << "Enter Contact Number : ";
        cin >> newData.contactNumber;
        newData.serial = serialCounter++;
        vector_data.push_back(newData);
        cout << "Contact " << newData.contactName << " : " << newData.contactNumber << " added Successfully" << endl;
        pushFunction();
     }

     void dialContactsFunction(){
        cout << "Enter a Serial Number of contact to dial : ";
        int inputSerial;
        cin >> inputSerial;
        bool found = false;
        for(auto val : vector_data){
            if(val.serial == inputSerial){
                found = true;
                cout << "Dialing..." << val.contactName << "..." << val.contactNumber << endl;
            } 
        }
        if(!found){
               cout << "No contacts match with that serial number" << endl;
            }
            pushFunction();
     }
};

int PhoneBook::serialCounter =0;

int main() {
    PhoneBook Object_PhoneBook;
    Object_PhoneBook.pushFunction();
    return 0;
}