#include <iostream>
using namespace std;
void flipBoolean(bool val);    //Function prototype

void flipBoolean(bool val) {
       if(val == true){
        // val = false;
        val = !val;
        cout << "Fliped Boolean is : " << boolalpha << false << endl;
       } else if(val == false){
        // val = true;
        val = !val;
        cout << "Fliped Boolean is : " << boolalpha << true << endl;
       }
}

int main() {

    bool input;
    cout << "Enter Either true or false" << endl;
    cin >> boolalpha >> input;
    
    // flipBoolean(false);
    // flipBoolean(true);
    flipBoolean(input);
    return 0;
}