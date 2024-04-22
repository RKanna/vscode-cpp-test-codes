//Online Ticket Reservation System

#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <conio.h>
using namespace std;

class ReservationSystem {

    struct Data {
        string userName;
        private:
        string password;

        public:
        //setpassword function for setting password because password declared under the private:
        void setPassword(const string& newPassword){
            password = newPassword;
            
        }

        string getPassword() const {
        return password;
        }
    };

    vector<Data> userVector;


   public:

   bool doesUserNameExitOrNot(const string& userName){

    for(auto val : userVector){
        if(val.userName == userName){
            return true;
        }
    }
    return false;
   }
     
    void userRegistration() {
      cout << "Hello Its a Ticket Reservation System" << endl;
      cout << "Registration is required to continue further" << endl;
      cout << "Enter user name" << endl;
      Data newData;
      cin >> newData.userName;
      cout << "Enter password" << endl;
      string password;
      char ch;
      ch = _getch();
      while (ch != 13) {
        password.push_back(ch);
        cout << "*";
        ch = _getch();
      }
      cout << endl;
      cout << "Enter Password once again" << endl;
      string confirmPassword;
    ch = _getch();
    while (ch != 13) {
        confirmPassword.push_back(ch);
        cout << "*";
        ch = _getch();
    }
    cout << endl;
      newData.setPassword(password);
      if(password == confirmPassword)
      {
         userVector.push_back(newData);
         cout << "User " << newData.userName << " Created Successfully" << endl;
         Login();
      }else {
         cout << "Password Mismatch Please Try again" << endl;
      }
    }

    //After User Successfull Registration
    void Login(int attempt = 0) {

        if(attempt >= 3){
             cout << "You tried many Times Please Try again Later" << endl;
             return;
        }
        Data LoginInstance;
        cout << "Please Enter The User Name : ";
        cin >> LoginInstance.userName;
        cout << "Please Enter The Password : ";
        string LoginPassword;
        char ch;
        ch = _getch();
    while (ch != 13) {
        LoginPassword.push_back(ch);
        cout << "*";
        ch = _getch();
    }
    cout << endl;
        LoginInstance.setPassword(LoginPassword);
        bool userExist = false;
        for(auto val:userVector){
            if(LoginInstance.userName == val.userName){
                userExist = true;
                if(LoginPassword == val.getPassword()){
                     cout << "Login Success";
                     viewAvailableBus();
                }else {
                       cout << "Login Failure" << endl;
                       Login(attempt +1);
                       return;
                }
            }
        }
    }

    void viewAvailableBus(){
        cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl;
        cout << "Welcome To Booking Management System" << endl;
        cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl;
    }

};

int main() {
    ReservationSystem ReserveTicket;
    ReserveTicket.userRegistration();
    return 0;
} 