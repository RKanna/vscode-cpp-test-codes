#include <iostream>
#include <vector>
#include <tuple>
#include <cctype>
using namespace std;

char selection;
char previous_selection = '\0';
//  typedef vector< tuple<int, int, int> > my_phone_tuple;
//     my_phone_tuple phoneBook1; 

vector<tuple<int, string,long long>> phoneVector;
int orderNumber;
string nameOfContact;
long long contactOfPerson;

int serialNum;



void phoneBook() {
    while (true)
    {
        if (selection == 'q') {
            break;
        } 
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;
        cout << "Phone Book" << endl;
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;
        cout << "Enter Section [A-Z] (Type q to Quit) : " << endl;
        cout << "Options" << endl;
        cout << "1) Add New Contact" << endl;
        cout << "2) Dial" << endl;
        cout << "3) Go Back" << endl;
        cin >> selection;
        if (isalpha(selection)) {
        char initial = toupper(selection);
        bool found = false;
        int totalContacts = 0;
    for (const auto& contact : phoneVector) {
        if (toupper(get<1>(contact)[0]) == initial) {
            if (!found) {
                cout << "Contacts in section " << initial << ":" << endl;
                cout << "S.No\tName\t\tMobile" << endl;
                found = true;
            }
            cout << get<0>(contact) << ")\t" << get<1>(contact) << "\t\t" << get<2>(contact) << endl;
            totalContacts++;
        }
    }
    cout << "> Total Contacts : " << totalContacts << endl;
    if (!found) 
    {
        cout << "No contacts available for section " << initial << endl;
    }
    }
        else if (isdigit(selection)) {
            if (isalpha(previous_selection) && previous_selection != '\0') {
                string changeSection;
                cout << "Section and Entered selection do not match. Do you want to change section? (Yes/No): ";
                cin >> changeSection;
                if (changeSection == "no" || changeSection == "NO") {
                    previous_selection = '\0';
                    // previous_selection = selection;
                    continue;
                    // break;
                }
                
            }

    if (selection == '2') {
    cout << "Enter Serial Number to Dial : " << endl;
    cin >> serialNum;
    bool found = false;
    for (const auto& contact : phoneVector) {
        if (get<0>(contact) == serialNum) {
            cout << "Dialing....." << get<2>(contact) << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Contact with serial number " << serialNum << " not found." << endl;
    }
}
else if(selection == '3') {
    selection = previous_selection;

}
else if(isdigit(selection) && selection == '1') 
        {
            cout << "Enter Contact Name : ";
            cin >> nameOfContact;
            cout << "Enter Contact Number : ";
            cin >> contactOfPerson;

                char initial = toupper(nameOfContact[0]);
                orderNumber = orderNumber+1;
                phoneVector.push_back(make_tuple(orderNumber, nameOfContact, contactOfPerson));

                cout << "Contact '" << nameOfContact << "' with number '" << contactOfPerson << "' added Successfully" << endl;
        }
        }
        else {
            cout << "Invalid input" << endl;
        }

        previous_selection = selection;
    }
}


int main() 
{
    phoneBook();
    return 0;
}