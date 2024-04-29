#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <conio.h>   //for _getch()
using namespace std;

class StudentPortal {
    
    private:
    struct studentData {

       int serialNum, age;
       string name, className, libraryCardNumber, password;
       char gender;
    };

    // queue<studentData> studentQueue;

    vector<studentData> storeVector;

    public:

    studentData student;

    void getStudentData() {
       
       cout << "Enter the Student Details" << endl;
       cout << "Enter the Student Name : ";
    //    cin >> student.name;
    getline(cin, student.name);
       cout << endl;
       cout << "Enter Age : ";
       cin >> student.age;
       while (student.age > 35 || student.age < 13) {
       cout << "Invalid Age kindly Enter correct Age : ";
        cin >> student.age;
       }
        
    
       cout << endl;
       cout << "Enter the Serial Number : ";
       cin >> student.serialNum;
       cin.ignore();
       cout << endl;
       cout << "Enter the Class Name : ";
    //    cin >> student.className;
    getline(cin, student.className);
       cout << endl;
       cout << "Gender : ";
       cin >> student.gender;
       cin.ignore();
       cout << endl;
       cout << "Enter Library Card Num : " << endl;
    //    cin >> student.libraryCardNumber;
    getline(cin, student.libraryCardNumber);
       cout << endl;
    //Password as * pateren
       const char ENTER = 13;
       const char BACKSPACE = 8;
       string pass = "";
       char ch =0;
       cout << "Enter your Prefered Password without any space " << endl;
       while ((ch = _getch() != ENTER)) {
           if(ch == BACKSPACE) {
            if(pass.length() > 0){
                cout << "\b\b";
                pass.resize(pass.length()-1);
            }
           }else {
            cout << "*";
            pass += ch;
           }
       }
    //    cin >> student.password;
    //    cin.ignore();
    //    studentQueue.push(student);
       storeVector.push_back(student);   //
       DisplayDetails();
       
    } 

    void DisplayDetails() {
        // if(studentQueue.empty()){
            if(storeVector.empty()){
            cout << "There is no data available in Queue" << endl;
        }

        // if(!studentQueue.empty()){
            if(!storeVector.empty()){
            // studentData student = studentQueue.front();
            studentData student = storeVector.front();
            // studentQueue.pop();
            cout << "\nName : " << student.name << endl;
            cout << "Age : " << student.age << endl;
            cout << "Serial Number : " << student.serialNum << endl;
            cout << "Gender : " << student.gender << endl;
            cout << "Library Card Number : " << student.libraryCardNumber << endl;
            cout << "Class : " << student.className << endl;
        }
        newFunction();
    }

    void VectorDisplay() 
    {
        for(auto val : storeVector)
        {
            cout << val.name;
        }
    }

    void newFunction() {
        char selection;
        cout << "Interested to feed another user Data here? [y/n] : ";
        cin >> selection;

        if(selection == 'y'){
            cin.ignore();
            getStudentData();
        }else if(selection == 'n'){
            cout << "Want to view Details of students ? [y/n] : ";
            cin >> selection;
            if(selection == 'y'){
                DisplayDetails();
            }else if(selection == 'n'){
                cout << "Are you sure to exit ? [y/n] : ";
                cin >> selection;
                if(selection == 'y'){
                    cout << "Exiting...";
                    studentLogin();
                    // return;
                }else if(selection == 'n'){
                    getStudentData();
                }
            }
        }
    }

    void studentLogin() {
        cout << "Hello There, Its a Student DB Management System" << endl;
        cout << "Kindly Login To access your details" << endl;
        cout << "Enter Student Name : ";
        cin >> student.name;
        cout << "Please Enter the password : ";
        cin >> student.password;
        bool found = false;
        for(auto val : storeVector){
            if(student.name == val.name){
                if(student.password == val.password)
                {
                   found = true;
                   cout << "Login Success" << endl;
                   break;
                }
            }
        }


    }

    void selectAction() {
        char user;
        cout << "Are you Existing User [y/n] : " << endl;
        cin >> user;
        if(user == 'y'){
            studentLogin();
        }else if(user == 'n') {
            cin.ignore();
            getStudentData();
        }
    }

};

int main(){
    StudentPortal portal;
    // portal.getStudentData();
    // portal.VectorDisplay();
    portal.selectAction();
    return 0;
}