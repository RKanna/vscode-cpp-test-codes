#include <iostream>
using namespace std;


void loopthroughStringAutoForLoop() {

    for(auto c :'This is a Notebook') {
       if(c != " "){
        cout << c;
    }
    }
    
}

int main() {
    loopthroughStringAutoForLoop();
    return 0;
}