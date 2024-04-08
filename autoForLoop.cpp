#include <iostream>
using namespace std;

void AutoLoopingInFor() {
   
   int test_Scores[] {45, 10, 20, 50};


//New method of looping in c++ Learning
   for(auto test_Scores:test_Scores)
   cout << test_Scores << endl;
}

int main() {
    AutoLoopingInFor();
    return 0;

}