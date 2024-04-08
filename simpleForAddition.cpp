#include <iostream>
using namespace std;


void forAddition() {
for(int i {1}, j {5}; i<=5; ++i,++j) {
    cout << i << "+" << j << "=" << (i+j) << endl;
}

//for loop will work without any curly blocks: below are the example of that code;

// for(int i {1}, j {5}; i<=5; ++i,++j)
//     cout << i << "+" << j << "=" << (i+j) << endl;
        
}

int main(){
    forAddition();
    return 0;
}