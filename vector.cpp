#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <int> test_scores {100, 74, 35, 98, 15};

    // cout << "Score at first index 0 : " << test_scores.at(0) << endl;
    // cout << "Score at second index 1 : " << test_scores.at(1) << endl;
    // cout << "Score at third index 2 : " << test_scores.at(2) << endl;
    // cout << "Score at third index 3 : " << test_scores.at(3) << endl;
    // cout << "Score at third index 4 : " << test_scores.at(4) << endl;

     cout << "Score at first index 0 : " << test_scores[0] << endl;
    cout << "Score at second index 1 : " << test_scores[1] << endl;
    cout << "Score at third index 2 : " << test_scores[2] << endl;
    cout << "Score at third index 3 : " << test_scores[3] << endl;
     cout << "Score at third index 4 : " << test_scores[4] << endl;

    return 0;
}