#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void generateRandomNumber() {

    int randomNumber {};
    size_t count {10};
    int min {1};
    int max {6};

    cout << "System Random Max Number : " << RAND_MAX << endl;
    srand(time(nullptr));

    for(size_t i{1}; i<=count; i++){
        randomNumber = rand() % max + min;
        cout << randomNumber << endl;
    }
   cout << endl;

   return;

}

int main() {
    generateRandomNumber();
    return 0;
}