#include <iostream>
using namespace std;

void convertCentsToUSD() {

    int Cents_Value {0};
    cout << "USD to Cents Converter" << endl;
    cout << "Enter the Cents value" << endl;
    cin >> Cents_Value;

    int USD_In_Cents = 100;
    int cents {0};
    int find_USD {0};

    if(Cents_Value > 100) {

        find_USD = Cents_Value / 100;
        cents = Cents_Value % 100;
        cout << "The USD value is : " << find_USD << endl;
        cout << "The Cents value is : " << cents << endl;

    }else if(Cents_Value == 100) {
        
        find_USD = 1;
        cout << "The USD value is : " << find_USD << endl;
        cout << "The Cents value is : " << "0" << endl;
    }else if(Cents_Value < 100) {
        cents = Cents_Value;
        cout << "The USD value is : " << "0" << endl;
        cout << "The Cents value is : " << cents << endl;
    }




}

int main() {
    convertCentsToUSD();
    return 0;
}