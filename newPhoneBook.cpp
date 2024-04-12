#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cctype>
using namespace std;

struct Contact {
    string name;
    long long number;
};

void phoneBook() {
    map<char, vector<Contact>> contactsMap;

    while (true) {
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;
        cout << "Phone Book" << endl;
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;
        cout << "Enter Section [A-Z] (Type q to Quit) : " << endl;
        cout << "Options" << endl;
        cout << "1) Add New Contact" << endl;
        cout << "2) Dial" << endl;
        cout << "3) Go Back" << endl;
        char selection;
        
        cin >> selection;

        switch (selection) {
            case '1': {
                Contact newContact;
                cout << "Enter Contact Name : ";
                cin >> newContact.name;
                cout << "Enter Contact Number : ";
                cin >> newContact.number;

                char initial = toupper(newContact.name[0]);
                contactsMap[initial].push_back(newContact);

                cout << "Contact '" << newContact.name << "' with number '" << newContact.number << "' added Successfully" << endl;
                break;
            }
            case '2': {
              
                break;
            }
            case '3':
                return;
            default:
                cout << "Invalid option!" << endl;
        }

        
        if (isalpha(selection)) {
            char initial = toupper(selection);
            if (contactsMap.find(initial) != contactsMap.end()) {
                cout << "Contacts in section " << initial << ":" << endl;
                cout << "S.No\tName\t\tMobile" << endl;
                int serial = 1;
                for (const auto& contact : contactsMap[initial]) {
                    cout << serial++ << ")\t" << contact.name << "\t\t" << contact.number << endl;
                }
            } else {
                cout << "No contacts available for section " << initial << endl;
            }
        } else {
            cout << "Invalid" << endl;
        }
    }
}

int main() {
    phoneBook();
    return 0;
}



//////////////////////////////////////


