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
        //Getpassword and setpassword function for getting and setting password because password declared under the private:
        

        void setPassword(const string& newPassword){
            password = newPassword;
            
        }
    };

    vector<Data> userVector;
   public:
     
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
         cout << "User Created Successfully" << endl;
      }else {
         cout << "Password Mismatch Please Try again" << endl;
      }
    }

};

int main() {
    ReservationSystem ReserveTicket;
    ReserveTicket.userRegistration();
    return 0;
} 