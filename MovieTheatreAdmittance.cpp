#include <iostream>
using namespace std;

//Function that takes two arguments age and isSupervised. then the 
//whole function returns the boolean output based on given inputs

void isThisMovieAllowedForMe(int age, bool isSupervised =false) {
    //  int age;
    //  bool isSupervised = false;

     if(age >= 15 && !isSupervised){
        // return true;
        cout << boolalpha << true << endl;
     }else if(age >=15 && isSupervised){
        // return true;
        cout << boolalpha << true << endl;
     }else if(age < 15 && isSupervised){
        // return false;
        cout << boolalpha << false << endl;
     }else if(age < 15 && !isSupervised){
        // return false;
        cout << boolalpha << false << endl;
     }
}

int main() {
    int personAge;
    bool boolVariable;
    cout << "Enter a Details of a person" << endl;
    cout << "Age : " << endl;
    cin >> personAge;
    cout << "Parental Supervision There or not(type true or false)" << endl;
    cin >> boolVariable;
    isThisMovieAllowedForMe(personAge, boolVariable);
    return 0;
}