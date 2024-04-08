#include <iostream>
#include <vector>
using namespace std;

void vectorLooping() {
    vector<int> nums {15,20,30,50,10};

    for(int i=0; i<nums.size(); i++){
        // here, when using vectors, nums.size() give unsigned intiger value, 
        // so it may give some warnings, if warning occur then change i initialization int to unsigned.
        cout << nums[i] << endl;
    }
}

int main() {
    vectorLooping();
    return 0;
}