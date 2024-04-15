#include <iostream>
#include <vector>
using namespace std;

struct Data
{
    int a;
};

class VectorTotal 
{
    public:
   vector<Data> Int_vector;

   void addEvaluation() {
    char choice;
    do
    {
       Data newData;
    cout << "Enter Data" << endl;
    cin >> newData.a;
    Int_vector.push_back(newData);
    cout << "Do you want to add More data (yes/no) ?" << endl;
    cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    getTotal();
   }

   void getTotal() {
    int total;
    for(auto iVal: Int_vector){
        total += iVal.a;
    }
    cout << "The Total Value is : "<< total << endl;
    // if(total >= 100){
    //     cout <<"The Total values is beyod or equal to 100 so loop still prevail" << endl;
        
    //     addEvaluation();
    // }else {
    //    total = 0;
    // }
   }
   

};


int main() {
    VectorTotal total_Object;
    total_Object.addEvaluation();
    // total_Object.getTotal();
    return 0;
}