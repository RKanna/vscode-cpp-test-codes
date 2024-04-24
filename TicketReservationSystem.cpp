//Online Ticket Reservation System

#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <conio.h>
// #include <boost/asios.hpp>
// Used for Async Serial Communication package library
using namespace std;


class Bus {
        public:

        struct busData {
       string busName, busRouteNumber;
       string departureTime, ReachTime;
       bool availability;
       string bookingStatus;
        };

        vector<busData> fullBusData;

        Bus() {
            fullBusData.push_back({"Vasantham", "1F", "18.00", "04.00", true, "Not Booked"});
            fullBusData.push_back({"Agaya Paravai", "104", "23.00", "07.30", true, "Not Booked"});
            fullBusData.push_back({"Vinveli", "S17", "16.00", "21.15", false, "Not Booked"});
        }

        vector<busData> getFullBusData() {
            return fullBusData;
        }

    };

class ReservationSystem {

    string currentUser;

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
    while (ch != 13) {                   //13 is in ASCII   13 indicate Enter button,
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
                     cout << "Login Success" << endl;
                     currentUser = val.userName;
                     viewAvailableBus();
                }
                else {
                       cout << "Login Failure" << endl;
                       Login(attempt +1);
                       return;
                }
            }
            else if(LoginInstance.userName != val.userName){
                cout << "Either Username or password is wrong" << endl;
                Login(attempt +1);
            }
        }
    }
    Bus bus;
    vector<Bus::busData> availableBuses = bus.getFullBusData();
    void viewAvailableBus()
    {
        cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl;
        cout << "Welcome To Booking Management System" << endl;
        cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl;
        // Bus bus;
        // vector<Bus::busData> availableBuses = bus.getFullBusData();
        cout << "Bus Name\t" << "Route No \t" << "Time\t\t" << "   Availability\t\t" << "Status" <<endl;
        //Without for loop, displaying bus data directly because its a static data already in the bus vector
        //but it may be going to dynamic because of user booking status.
        cout << availableBuses[0].busName << "\t" << availableBuses[0].busRouteNumber << "\t\t" << availableBuses[0].departureTime << "-" << availableBuses[0].ReachTime << "\t\t" << (availableBuses[0].availability ? "Yes" : "No") << "\t\t" << availableBuses[0].bookingStatus << endl;
        cout << availableBuses[1].busName << "\t" << availableBuses[1].busRouteNumber << "\t\t" << availableBuses[1].departureTime << "-" << availableBuses[1].ReachTime << "\t\t" << (availableBuses[1].availability ? "Yes" : "No") << "\t\t" << availableBuses[1].bookingStatus << endl;
        cout << availableBuses[2].busName << "\t\t" << availableBuses[2].busRouteNumber << "\t\t" << availableBuses[2].departureTime << "-" << availableBuses[2].ReachTime << "\t\t" << (availableBuses[2].availability ? "Yes" : "No") << "\t\t" << availableBuses[2].bookingStatus << endl;
        busSelection();
    }

    void busSelection()
    {
        string input_bus_route_number;
        bool found = false;
        cout << "Enter bus Route Number you want to Book : " << endl;
        cin >> input_bus_route_number;
        for (auto inBus : availableBuses){
            if(input_bus_route_number == inBus.busRouteNumber){
                found = true;
                if(inBus.availability == true){
                    cout << "Bus Booked Successfully" << endl;
                    showStatusWithUser();
                    break;
                }else {
                    cout << "Bus Not available to book" << endl;
                    break;
                }
            }
        }
        if(!found){
               cout << "Please Check the Route Number" << endl;
            }
    }
     

    void showStatusWithUser(){
        cout << "Current Booking Status" << endl;
        for(auto val: userVector){
            if(val.userName == currentUser){
                cout << "User : " << currentUser;
                
            }else {
                cout << "Hello Member";
            }
             
        }
    }
};



int main() {
    ReservationSystem ReserveTicket;
    ReserveTicket.userRegistration();
    Bus bus_object;
    return 0;
} 