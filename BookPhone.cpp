#include <iostream>
#include <vector>
#include <cctype>
using namespace std;


struct Contact {
    string name;
    int serialNumber;
    string contactNumber;
};

class PhoneBookManager {
     
     public:
     vector<vector<Contact>> contacts;

     void contactManager() {
        contacts.resize(26);
     }

     void addContact(const Contact& contact) {
        char firstChar = contact.name[0];
        cout << "Enter the Option A-Z" << endl;
        cin >> firstChar;
        if (isalpha(firstChar)) {
            int index = toupper(firstChar) - 'A';
            contacts[index].push_back(contact);
        }
    }

};

int main() {
    PhoneBookManager manager;
    manager.addContact();
    return 0;
}