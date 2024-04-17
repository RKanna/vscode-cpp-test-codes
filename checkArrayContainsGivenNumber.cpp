#include <iostream>
using namespace std;

void FindANumberInArray() {

    int int_arr[4] = {5,3,2,8};
    bool found = false;
    
    int num;
    cout << "Enter the Value : " << endl;
    cin >> num;
    for(int i=0; i<sizeof(int_arr)/sizeof(int); i++){
                // cout << int_arr[i];
                if(num == int_arr[i]){
                    found == true;
                    break;
                }        
    }
    if(foundVal){
        cout << foundVal << " Number Found" << endl;
    }else if(!foundVal) {
        cout << "The Entered Value is Not found in Array" << endl;
    }

}

int main() {
    FindANumberInArray();
    return 0;
}