#include <iostream>

using namespace std;

int main() {
    int room_length {0};
    int room_width {0};

    cout << "Enter the Room Length" << endl;
    cin >> room_length;
    cout << "Enter the Room Width" << endl;
    cin >> room_width;

    int result = room_length * room_width;

    cout << result;

    return 0;


 }