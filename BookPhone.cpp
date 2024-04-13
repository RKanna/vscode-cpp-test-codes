#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
#include <cctype>
#include <cstring>

using namespace std;

struct Contact {
    string name;
    string number;
};

class PhoneBook {
private:
    map<char, vector<Contact>> contacts;

    bool checkValid(char section) {
        return (section >= 'A' && section <= 'Z');
    }

    bool checkMatchSection(char section, const string& name) {
        return (toupper(name[0]) == section);
    }

    void displayContacts(char section) {
        cout << "Contacts in " << section << "..." << endl;
        cout << setw(4) << "S.No" << setw(15) << "Name" << setw(15) << "Mobile" << endl;
        int count = 1;
        for (const auto &contact : contacts[section]) {
        cout << setw(4) << count++ << setw(15) << contact.name << setw(15) << contact.number << endl;
        }
        cout << "> Total contacts: " << contacts[section].size() << endl;
    }

public:
    void addContact(char section) {

        string name, number;
        cout << "Enter Contact Name: ";
        cin >> name;
        if (!checkMatchSection(section, name)) {
            cout << "Section is \"" << section << "\" and entered name is starting with \"" << name[0] << "\", so it's not matched." << endl;
            cout << "Do you want to change section? (yes/no): ";
            string change;
            cin >> change;

            if (change == "yes") {
                cout << "Enter Contact Number: ";


                cin >> number;
                section = toupper(name[0]);
            } else {
                cout << "Contact not added." << endl;
                return;
            }
        } else {
            cout << "Enter contact number: ";
            cin >> number;
        }

        Contact newContact = {name, number};
        contacts[section].push_back(newContact);
        cout << "Contact '" << name << " : " << number << "' added successfully." << endl;
    }

    void dial(char section) {
        int serial;
        cout << "Enter serial number to dial: ";
        cin >> serial;
        if (serial > 0 && serial <= contacts[section].size()) {
            cout << "Dialing..." << contacts[section][serial - 1].number << endl;
        } else {
            cout << "Invalid serial number!" << endl;
        }
    }

    void run() {
        char option, section;
        bool changeSection;
        do {
            cout << "+-+-+-+-+-+-+-+-+-+" << endl;
            cout << "        PhoneBook" << endl;
            cout << "+-+-+-+-+-+-+-+-+-+" << endl;
            cout << "Enter Section [A-Z] (type q to quit): ";
            cin >> option;
            // option = toupper(option);
            // if(option == 'Q')
            //     break;
            char lowerValue = islower(option);
            if (lowerValue && option == 'q') {
                break;
            } else if (option == 'Q') {
                if (contacts.find(section) != contacts.end()) {
                    displayContacts(section);
                }
            }
           option = toupper(option);
            if (!checkValid(option)) {
                cout << "Invalid section!" << endl;
                continue;
            }
            section = option;
            changeSection = false;
            cout << endl;

            // cout << "Contacts in " << section << "..." << endl;
            if(contacts.find(section) != contacts.end()) {
                displayContacts(section);
            } else {
                cout << "No contacts available...." << endl;
            }

            cout << "Options:" << endl;
            cout << "1) Add new contact" << endl;
            cout << "2) Dial" << endl;
            cout << "3) Go Back" << endl;
            cout << "Option: ";
            cin >> option;

            switch (option) {
                case '1':
                    addContact(section);
                    break;
                case '2':
                    dial(section);
                    break;
                case '3':
                    break;
                default:
                    cout << "Invalid option!" << endl;
            }
        } while (option != '3');
    }
};

int main() {
    PhoneBook phoneBook;
    phoneBook.run();
    return 0;
}

