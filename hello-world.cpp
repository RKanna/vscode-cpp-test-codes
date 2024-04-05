#include <iostream>

using namespace std;

int main() {

    int get_Variable;

    cout << "Enter a Random number between 1 to 100 : ";

    cin >> get_Variable;

    if(get_Variable > 100) {
        cout << "The Number you entered is beyond its Range";

    }else {
       cout << "Thanks for giving Random Number" << endl;

    }

    

    return 0;

}