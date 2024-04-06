#include <iostream>
using namespace std;

//Always use Main function below the user defined Function to avoid function defined errors

void myFunction (string name, int age, string location, double height) {

    cout << "Enter your Age" << endl;

    cin >> age;

 if(age>40) {
    cout << "You are older than him" << endl;
 }else if(age<40) {
    cout << "You are younger than him" << endl;
 } 
   cout << name << "-" << age << "-" << location << "-" << height;
}

int main() {

    myFunction("Kannan", 30, "Coimbatore", 5.5);

    return 0;

}

