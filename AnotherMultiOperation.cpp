//print numbers
//Add a number
//display mean of the number
//display the smallest number
//display the largest number
//quit

#include <iostream>
#include <vector>
using namespace std;

void multiOperationFunction() {

    char nums {};
    vector<double> data_nums {};
        double num_to_add {};

    cout << "Its a Multi Operation Calc" << endl;
    cout << "1.Print a Number" << endl;
    cout << "2.Add a Number" << endl;
    cout << "3.Display Mean of the Number" << endl;
    cout << "4.Display the Smallest Number " << endl;
    cout << "5.Display the Largest Number " << endl;
    cin >> nums;

    switch (nums)
    {
    case '1':
    {
        if(data_nums.size() == 0){
            cout << "There is no number inside the Vector";
            
        }else if(data_nums.size() != 0) {
            for(auto val:data_nums) {
                cout << val << endl;
                
            }
        }
        break;
    }
    
    case '2':
    {
        
        cout << "Enter the Number for Adding" << endl;
        cin >> num_to_add;
        data_nums.push_back(num_to_add);
        for(int i {0}; i<data_nums.size(); i++)
        {
            cout << data_nums[i] << endl;
        }

        // break;
       
    }
        
    
    default: {
         break;
    }
        
    }
}

int main() {
    multiOperationFunction();
    return 0;
}