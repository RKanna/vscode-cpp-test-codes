#include <iostream>
using namespace std;

void AutoLoopingInFor() {
   
   int test_Scores[] {45, 10, 20, 50};


//New method of looping in c++ Learning
   for(auto test_Scores:test_Scores)
   cout << test_Scores << endl;

   //This auto looping will work in Vectors also. (Test case use with temperature average calculation)
}

int main() {
    AutoLoopingInFor();
    return 0;

}