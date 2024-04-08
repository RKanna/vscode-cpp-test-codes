#include <iostream>
#include <vector>
using namespace std;

void FindingAverageUsingVectors() {

    double total, avg;

    vector<double> nums {24.5, 64.34, 15.12, 89.49, 21.34};

    for(int i=0; i<nums.size(); i++) {
        cout << nums[i] << endl;
        total = total+nums[i];
        avg = total/nums.size();
        
    }
    cout << "The Average of vector values of : "<< avg << endl;
}

int main() {
    FindingAverageUsingVectors();
    return 0;
}