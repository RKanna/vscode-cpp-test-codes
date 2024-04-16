#include <iostream>
#include <vector>
using namespace std;

//Used Vector Mapping 
void ConvertNumberToMonthNames() {
       
       vector<pair<int, string>> MappedMonth;

       int num;
       string month;

       int monthNumbers[] = {1,2,3,4,5,6,7,8,9,10,11,12};
       string monthNames[] = {"Januaray", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

       for(int i=0; i<12; i++)
       {
        MappedMonth.push_back(make_pair(monthNumbers[i], monthNames[i]));
       }

      cout << "Enter a Number : " << endl;
      cin >> num;
      if(num>12){
        cout << "Not a Valid Month" << endl;
      }else if(static_cast<int>(num) == num){   
      //Program works good but Condition is not working,
      //There is a need for alternative way to find user's input is floating point or not
      //if i give floating point value then
        // cout << "Number having Decimal Point" << endl;
         month = "";

      for(auto pair:MappedMonth){
        if(pair.first == num){
            month = pair.second;
        }
      }
      cout << month << endl;
      }
      
}

int main() {
    ConvertNumberToMonthNames();
    return 0;
}