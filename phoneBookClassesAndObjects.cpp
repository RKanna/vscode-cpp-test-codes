#include <iostream>
#include <vector>
#include <tuple>
#include <cctype>
#include <map>
using namespace std;

    char userInput;
   

    struct Details
    {
        int orderNumber;
        string userName;
        long long userNumber;
    };

     map<char, vector<Details>> dataMap;
     map<char, int> lastSerialNumber;
    

    void DisplayFunction()
    {
        while (true)
        {
            // if(option2 == 'q')
            // {
            //     break;
            // }
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;
        cout << "\tPhone Book" << endl;
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;
        cout << "Enter Section [A-Z] (Type q to Quit) : " << endl;
        cout << "Options" << endl;
        cout << "1) Add New Contact" << endl;
        cout << "2) Dial" << endl;
        cout << "3) Go Back" << endl;
        cin >> userInput;

        switch (userInput)
        {
        case userInput:
          if (dataMap.find(userInput) == dataMap.end()) {
        cout << "No entries found for selection '" << userInput << "'.\n";
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;
        cout << "\tPhone Book" << endl;
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;
        cout << "Enter Section [A-Z] (Type q to Quit) : " << endl;
        cout << "Options" << endl;
        cout << "1) Add New Contact" << endl;
        cout << "2) Dial" << endl;
        cout << "3) Go Back" << endl;
        char choice;
        cin >> choice;
        // if (choice == 'Y' || choice == 'y') {
             if (choice == '1') {
            Details newEntry;
            newEntry.orderNumber = lastSerialNumber[userInput] + 1;
            lastSerialNumber[userInput] = newEntry.orderNumber; 
            cout << "Enter username: ";
            cin >> newEntry.userName;
            if(newEntry.userName.at(0) != userInput[0]){
                cout << "Name not matching" << endl;
            }
            cout << "Enter phone number: ";
            cin >> newEntry.userNumber;
            dataMap[userInput].push_back(newEntry);
            cout << "Contact " << newEntry.userName << " : " << newEntry.userNumber << " added Successfully" << ".\n";
        }
    } else {
        cout << "Existing entries for selection '" << userInput << "':\n";
        for (const auto& entry : dataMap[userInput]) {
            cout << "Serial Number: " << entry.orderNumber << ", Username: " << entry.userName << ", Phone number: " << entry.userNumber << "\n";
        }
    }
            break;

        case '1' :
           if(isdigit(userInput)){
            if(userInput == '1'){
                //check if filtered vector is 
            }
           }
            break;    
        
        default:
            break;
        }

        }
    }

int main() {
    DisplayFunction();
    return 0;
}
