#include <iostream>
using namespace std;

void returnsTheLastElementFromArray() {
    int arr[10] ={5,6,4,9,10};
    
    int lengthVal = end(arr)-begin(arr);
    // cout << lengthVal << endl;

    int lastValue = 0;
    for(int i=0; i<10; i++){
        int arrayOfI = arr[i];
        // cout << arr[i] << endl;
        if(arr[i] > 0) {
            // cout << arr[i] << endl;
            // cout << arr[i] << endl;
            lastValue = arr[i];
            
        }
        cout << lastValue << endl;
        
    }

}

int main() {
    returnsTheLastElementFromArray();
    return 0;
}