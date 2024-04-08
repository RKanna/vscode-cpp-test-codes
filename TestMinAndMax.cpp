#include <iostream>
using namespace std;

  
    
    int num {0};

void minTestFunction() {
    int min {10};
  
    cout << "Its a MinMax Test Function " << endl << "Enter the Num value " << endl;
    cin >> num;

    if(num > min) {
        cout << "The value " << num << " is greater than " << min << endl;
        int diff {num-min};
        if(diff > min) {
         cout << "The value difference " << diff << " is greater than " << min << endl;
        }
        
    }else if(num < min) {
        cout << "The value " << num << " is lesser than " << min << endl;
    }



}

void maxTestFunction() {
    int max {50};
  
    cout << "Its a MinMax Test Function " << endl << "Enter the Num value " << endl;
    cin >> num;

    if(num > max) {
        cout << "The value " << num << " is greater than " << max << endl;
        int diff {num-max};
        if(diff > max) {
         cout << "The value difference " << diff << " is greater than " << max << endl;
        }
        
    }else if(num < max) {
        cout << "The value " << num << " is lesser than " << max << endl;
    }



}

int main() {
    minTestFunction();
    maxTestFunction();
      return 0;
}