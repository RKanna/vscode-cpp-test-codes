#include <iostream>
#include <vector>
using namespace std;

char selection {};
string contactName {};
    long long contactNumber {};
    vector<pair<string, long long>> contactsVector;
    // vector<tuple<string, long long, int>> contactsVector;
    int serailNumber {0};
    int inputSerialNumber;
    int serial {1};
void phoneBook() {
    while (true)
    {
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;
    cout << "Phone Book" << endl;
    cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;
    cout << "Enter Section [A-Z] (Type q to Quit) : " << endl;
    cout << "Options" << endl;
    cout << "1) Add New Contact" << endl;
    cout << "2) Dial" << endl;
    cout << "3) Go Back" << endl;
    cin >> selection;
    switch (selection)
    {
    case '1':
        cout << "Enter Contact Name : " << endl;
        cin >> contactName;
        cout << "Enter Contact Number : " << endl;
        cin >> contactNumber;
        contactsVector.push_back(make_pair(contactName,contactNumber));
        cout << "Contact" << "'" << contactName << " :" << contactNumber << "'" << "added Successfully" << endl;
        break;
        case 'A' : case 'B' : case 'k' : case 'K' : 
        case 'c' : case 'd' : case 'e' : case 'f' :
        case 'g' : case 'h' : case 'i' : case 'j' :
        case 'C' : case 'l' : case 'm' : case 'n' :
        case 'o' : case 'p' : case 'q' : case 'r' :
        case 's' : case 't' : case 'u' : case 'v' :
        case 'w' : case 'x' : case 'y' : case 'z' :
        case 'D' : case 'E' : case 'F' : case 'G' :
        case 'H' : case 'I' : case 'J' : case 'L' :
        case 'M' : case 'N' : case 'O' : case 'P' :
        case 'Q' : case 'R' : case 'S' : case 'T' :
        case 'U' : case 'V' : case 'W' : case 'X' :
        case 'Y' : case 'Z' :
        if(contactsVector.empty()){
            cout << "No contacts Available" << endl;
        }else {
            cout << "Contacts in " << selection << "...." << endl;
            cout << "S.No" << "          " << "Name" << "                     " << "Mobile" << endl;   
             for (const auto& pair : contactsVector) {
        if (pair.first.front() == toupper(selection) || pair.first.front() == tolower(selection)) {
            cout << serial++ << ")" << "           " << pair.first << "                  " << pair.second << endl;
        }
    }
        }
         break; 
    case '2' :
        cout << "Enter the serial Number to Dial : " << endl;
        cin >> inputSerialNumber;
        for(auto val:contactsVector){
           if(inputSerialNumber == serial) {
            cout << "Dialing....." << val.second << endl;
        }
        }
        break;
           
    default:
        break;
    }

    }
}

int main() {
    phoneBook();
    return 0;
}