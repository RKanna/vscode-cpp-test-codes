#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <int> scores {34,72, 53, 12, 76};

    

    cout << "Vector value got from inputs" << endl;



    cin >> scores.at(0);
    cout << scores[0] << endl;
    cout << scores.size();
    cout << "Exception or Error" << scores.at(10);
    return 0;
}