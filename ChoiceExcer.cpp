#include <iostream>
#include <vector>

using namespace std;

//print numbers
//Add a number
//display mean of the number
//display the smallest number
//display the largest number
//quit

void choiceSelection() {
     vector<double> nums {10,12,24};
     //Multi Operations
     //Print numbers done
    for(int i {0}; i<nums.size(); i++){
        cout << " " << nums[i] << endl;
    }
   
        //Add number
   double data {};
   cout << "Enter a number to add" << endl;
   cin >> data;
   nums.push_back(data);
   cout << "Number added" << endl;

   //Display Mean of the number;
   double vari1;
   double avg;
   for(int i {0}; i<nums.size(); i++) {
          vari1 = vari1 + nums[i];
          avg = vari1/nums.size();
         
   }
   cout << "The Mean value is : " << static_cast<double>(avg) << endl;
   
   //display the smallest number

   if(nums.size() == 0)
   {
    cout << "The size is 0 so Can't able to find smallest number" << endl;
   } else {
       int smallest = nums.at(0);
    for(auto val:nums){
      if(val < smallest) {
        cout << "The Smallest Number is" << smallest;
    }
    }
   }
    
    
   }
   

int main() {
    choiceSelection();
    return 0;
}