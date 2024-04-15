#include <iostream>
using namespace std;

void CompareStrings() 
{

     string str1, str2;
     cout << "Comparing Strings by its Count" << endl;
     cout << "Enter the First String" << endl;
     getline(cin, str1);
     cout << "Enter the second String" << endl;
     getline(cin, str2);
     int str1Length = str1.length();
     int str2Length = str2.length();
     
     if(str1Length > str2Length) {
        cout << str1 << " length is " << str1Length <<  " So " << str1 << " is greater than " << str2 << endl;
     }else if(str2Length > str1Length){
        cout << str2 << " length is " << str2Length <<  " So " << str2 << " is greater than " << str1 << endl;
     }else {
        cout << str2 << " & " << str2 <<  " both are same in length " << endl;
     }
}

int main() {
    CompareStrings();
    return 0;
}