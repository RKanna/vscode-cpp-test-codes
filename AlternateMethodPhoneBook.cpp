#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

struct Contact {
    string name;
    string number;
};

bool isValidSection(char section) {
    return (section >= 'A' && section <= 'Z');
}

bool isMatchingSection(char section, const string& name) {
    return (toupper(name[0]) == section);
}

void displayContacts(map<char, vector<Contact>>& contacts, char section) {
    cout << "Contacts in " << section << "..." << endl;
    cout << setw(4) << "S.No" << setw(15) << "Name" << setw(15) << "Mobile" << endl;
    int count = 1;
    for (const auto &contact : contacts[section]) {
        cout << setw(4) << count++ << setw(15) << contact.name << setw(15) << contact.number << endl;
    }
    cout << "> Total contacts: " << contacts[section].size() << endl;
}

void addContact(map<char, vector<Contact>>& contacts, char section) {
    string name, number;
    cout << "Enter Contact Name: ";
    cin >> name;
    if (!isMatchingSection(section, name)) {
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

void dial(map<char, vector<Contact>>& contacts, char section) {
    int serial;
    cout << "Enter serial number to dial: ";
    cin >> serial;
    if (serial > 0 && serial <= contacts[section].size()) {
        cout << "Dialing..." << contacts[section][serial - 1].number << endl;
    } else {
        cout << "Invalid serial number!" << endl;
    }
}

int main() {
    map<char, vector<Contact>> contacts;
    char option, section;
    bool exitLoop = false;

    while (!exitLoop) {
        cout << "+-+-+-+-+-+-+-+-+-+" << endl;
        cout << "       PhoneBook" << endl;
        cout << "+-+-+-+-+-+-+-+-+-+" << endl;
        cout << "Enter Section [A-Z] (type q to quit): ";
        cin >> option;
        option = toupper(option);
        if(option == 'Q')
            break;
        if (!isValidSection(option)) {
            cout << "Invalid section!" << endl;
            continue;
        }
        section = option;
        cout << endl;

        cout << "Contacts in " << section << "..." << endl;
        if(contacts.find(section) != contacts.end()) {
            displayContacts(contacts, section);
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
                addContact(contacts, section);
                break;
            case '2':
                dial(contacts, section);
                break;
            case '3':
                exitLoop = true;
                break;
            default:
                cout << "Invalid option!" << endl;
        }
    }
    return 0;
}
