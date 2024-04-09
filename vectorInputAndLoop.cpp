#include <iostream>
#include <vector>
using namespace std;


//Displaying histogram
//geting input from user and save those values to vector

void testFunctionVectorAdded() {

    int nums {};

    cout << "How many Items do you have ?" << endl;
    cin >> nums;

    vector<int> data {};


    for(int i {0}; i<=nums; i++) {
        int data_items {};
        cout << "Enter a data_item : " << i << endl;
        cin >> data_items;
        data.push_back(data_items);

    }
    cout << "Displaying Histogram" << endl;
    for(auto val: data){
        for(int i{1}; i<=val; i++) {
            if(i % 5 == 0) {
                cout << "*";
            }else {
               cout << "-";
            }
                
        }
        cout << endl;
    }

}

int main() {
    testFunctionVectorAdded();
    return 0;
}