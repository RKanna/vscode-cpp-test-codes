#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Contact {
    string name;
    int serialNumber;
    string contactNumber;
};

class ContactManager {
private:
    vector<vector<Contact>> contacts; 
public:
    ContactManager() {
       
        contacts.resize(26);
    }

    
    void addContact(const Contact& contact) {
        char firstChar = contact.name[0];
        if (isalpha(firstChar)) {
            int index = toupper(firstChar) - 'A';
            contacts[index].push_back(contact);
        }
    }

    
    vector<Contact> getContactsByFirstChar(char firstChar) {
        vector<Contact> result;
        if (isalpha(firstChar)) {
            int index = toupper(firstChar) - 'A';
            result = contacts[index];
        }
        return result;
    }
};

int main(int argc, char* argv[]) {
    ContactManager manager;

    
    for (int i = 1; i < argc; i++) {
        string name = argv[i++];
        int serialNumber = stoi(argv[i++]);
        string contactNumber = argv[i];
        manager.addContact({name, serialNumber, contactNumber});
    }

   

   
    vector<Contact> aContacts = manager.getContactsByFirstChar('A');
    cout << "Contacts whose names start with 'A':" << endl;
    for (const auto& contact : aContacts) {
        cout << contact.name << " - " << contact.contactNumber << endl;
    }

    return 0;
}
