#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

//Usage of Queue in a program, pushing, poping, displaying, 


class TestQUEUES {
     public:

     queue<int> newQueue;

     int tempVariable;
     char selection;
      
      
      void pushFunction() {
          newQueue.push(5);
          newQueue.push(6);
        //   cout << "Size of the Queue is" << newQueue.size() << endl;
        //   cout << "Front of the Queue is : " << newQueue.front() << endl;
        //   newQueue.pop();
        //   cout << "Current size of queue is " << newQueue.size() << endl;
        //   cout << "Current Front line value is : " << newQueue.front() << endl;
        cout << "Are you willing to push a Number into queue ? [Type y/n]" << endl;
        cin >> selection;
         while (selection == 'y') {
           cout << "Enter the number to insert into queue : " << endl;
           cin >> tempVariable;
           if(tempVariable >= 5){
            newQueue.pop();
           }else if(tempVariable < 5) {
               newQueue.push(tempVariable);
           }
           cout << "Want to push more number? [y/n]" << endl;
           cin >> selection;
         }
         cout << "The size of the Queue is : " << newQueue.size() << endl;

         displayQueue();

        
      }

      void displayQueue() {

            while (!newQueue.empty()) {
                 cout << newQueue.front();
                 newQueue.pop();
            }
            return;
      }
     

};

int main() {
    TestQUEUES obj1;
    obj1.pushFunction();
    return 0;
}