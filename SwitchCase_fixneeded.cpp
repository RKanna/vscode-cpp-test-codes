#include <iostream>
using namespace std;

void switchCaseFunction() {
    string individual_day;
   string days[7] = {"SUNDAY", "MONDAY","TUESDAY","WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"};

    for(int i=0; i<7; i++){
        individual_day = days[i];
        // cout << days[i] << endl;

        string user_day;

        cin >> user_day;

        // string Correct_day = (user_day = individual_day);

        switch (user_day == individual_day)
        {
        case 'SUNDAY':
            cout << "The day is" << individual_day;
            break;
        
        default: cout << user_day;
            break;
        }

        
    }
}

int main() {
    switchCaseFunction();
    return 0;
}

// #include <iostream>
// using namespace std;

// void daySelectionFunction(string days) {

//     string individual_day;

//     days[7] = {"SUNDAY", "MONDAY","TUESDAY","WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"};

//     for(int i=0; i<=7; i++){
//        individual_day = days[i];
//        cout << days[i] << endl;
//     }     
// }
// int main() {
//     daySelectionFunction("SUNDAY");
//     return 0;
// }