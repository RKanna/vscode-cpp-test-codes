#include <iostream>
#include <cstdlib>  // for srand and rand functions
#include <ctime>    // for ctime

using namespace std;


void numberGuessingGame() {

    srand(static_cast<unsigned int>(time(0)));

    int randomNumber = rand() % 100 + 1;

    int guess = 0;

    cout << "Guessed Number between 1 to 100 Can you find that number ?" << endl;


    while (guess != randomNumber) {

        cout << "Enter the Number" << endl;
         cin >> guess;

         if(guess > randomNumber) {
            cout << "Entered Number is beyond the secret Number" << endl;
         }else if(guess < randomNumber) {
            cout << "Entered Number is less than the secret Number" << endl;
         }else if (guess == randomNumber) {
             cout << "Yes you guessed the Correct Number" << endl;
         }
    
    }
}

int main() {
    numberGuessingGame();
     return 0;
}