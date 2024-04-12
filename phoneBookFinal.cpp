#include <iostream>
#include <vector>
#include <tuple>
#include <cctype>
#include <map>

using namespace std;

struct Details {
    int orderNumber;
    string userName;
    long long userNumber;
};

map<char, vector<Details>> dataMap;
map<char, int> lastSerialNumber;

void DisplayFunction() {
    while (true) {
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;
        cout << "\tPhone Book" << endl;
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;
        cout << "Enter Section [A-Z] (Type q to Quit) : ";
        char userInput;
        cin >> userInput;

        if (userInput == 'q') {
            break;
        }

        userInput = toupper(userInput); 

        if (!isalpha(userInput) || userInput < 'A' || userInput > 'Z') {
            cout << "Invalid input. Please enter a letter from A to Z or 'q' to quit." << endl;
            continue;
        }

        if (dataMap.find(userInput) == dataMap.end()) {
            cout << "No Contacts Available" << endl;
            cout << "Options:" << endl;
            cout << "1) Add New Contact" << endl;
            cout << "2) Dial" << endl;
            cout << "3) Go Back" << endl;

            char choice;
            cin >> choice;

            switch (choice) {
                case '1': {
                    Details newEntry;
                    newEntry.orderNumber = lastSerialNumber[userInput] + 1;
                    lastSerialNumber[userInput] = newEntry.orderNumber; 
                    cout << "Enter username: ";
                    cin >> newEntry.userName;
                    if(newEntry.userName.at(0) != userInput) {
                        cout << "Section and Entered Name was not matched." << endl;
                        cout << "Do you want Change Section (yes/no)" << endl;
                        char changeSection;
                        // while (true) {
                        //     cout << "Do you want to change the section? (yes/no): ";
                        //     cin >> changeSection;
                        //     if (changeSection == 'yes' || changeSection == 'y') {
                        //         cout << "Enter new section [A-Z]: ";
                        //         char newSection;
                        //         cin >> newSection;
                        //         newSection = toupper(newSection);
                        //         if (!isalpha(newSection) || newSection < 'A' || newSection > 'Z') {
                        //             cout << "Invalid section. Contact not added." << endl;
                        //             break;
                        //         }
                        //         userInput = newSection; 
                        //         cout << "Enter username: ";
                        //         cin >> newEntry.userName;
                        //         cout << "Enter phone number: ";
                        //         cin >> newEntry.userNumber;
                        //         dataMap[userInput].push_back(newEntry);
                        //         cout << "Contact " << newEntry.userName << " : " << newEntry.userNumber << " added Successfully" << endl;
                        //         break;
                        //     } else if (changeSection == 'no' || changeSection == 'n') {
                        //         cout << "Contact not added." << endl;
                        //         break;
                        //     } else {
                        //         cout << "Invalid input. Please enter 'yes' or 'no'." << endl;
                        //     }
                        // }

                        while (true) {
                            cout << "Do you want to change the section? (yes/no): ";
                            cin >> changeSection;
                            if (changeSection == 'yes' || changeSection == 'y') {
                                cout << "Enter new username: ";
                                cin >> newEntry.userName;
                                userInput = toupper(newEntry.userName[0]);
                                if (!isalpha(userInput) || userInput < 'A' || userInput > 'Z') {
                                    cout << "Invalid input. Username must start with a letter from A to Z." << endl;
                                    break;
                                }
                                cout << "Enter phone number: ";
                                cin >> newEntry.userNumber;
                                dataMap[userInput].push_back(newEntry);
                                cout << "Contact " << newEntry.userName << " : " << newEntry.userNumber << " added Successfully" << endl;
                                cout << "Options:" << endl;
                                cout << "1) Add New Contact" << endl;
                                cout << "2) Dial" << endl;
                                cout << "3) Go back" << endl;
                                break;
                            } else if (changeSection == 'no' || changeSection == 'n') {
                                cout << "Contact not added." << endl;
                                break;
                            } else {
                                cout << "Invalid input. Please enter 'yes' or 'no'." << endl;
                            }
                        }

                        break;
                    }
                    cout << "Enter phone number: ";
                    cin >> newEntry.userNumber;
                    dataMap[userInput].push_back(newEntry);
                    cout << "Contact " << newEntry.userName << " : " << newEntry.userNumber << " added Successfully" << endl;
                   //
                    
                    break;
                }
                default:
                    break;
            }
        } else {
            cout << "Existing entries for selection '" << userInput << "':" << endl;
            for (const auto& entry : dataMap[userInput]) {
                cout << "Serial Number: " << entry.orderNumber << ", Username: " << entry.userName << ", Phone number: " << entry.userNumber << endl;
            }
        }
    }
}

int main() {
    DisplayFunction();
    return 0;
}


/////////////////////////

