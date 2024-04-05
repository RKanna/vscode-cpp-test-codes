#include <iostream>

using namespace std;

int main() {
    const int expiration {30};
    double rooms {0};
    const double tax {0.06};
    const double price {30};
    cout << "How many Rooms ?" << endl;
    cin >> rooms;
    cout << "Price Per Room : " << price << endl;
    cout << "Cost " << (rooms * price) << endl;
    cout << "Tax " << (rooms * price * tax) << endl;
    cout << "Total Estimate " << (rooms * price) + (rooms * price * tax) << endl;
    cout << expiration << " Days" << endl;
    return 0;


    
}