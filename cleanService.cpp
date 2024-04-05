#include <iostream>

using namespace std;

int main() {
    double charges_small_room {25};
    double charges_big_room {35};
    float sales_tax {6.0}; //percentage
    int validity {30}; //days
    double number_of_small_rooms {0};
    double number_of_big_rooms {0};
    // double cost_calc = (number_of_small_rooms * charges_small_room) + (number_of_big_rooms * charges_big_room);
    // double tax_calc = cost_calc * sales_tax;
    cout << "Estimate for carpert Cleaning Service " << endl;

    cout <<"Enter the small Rooms" << endl;
    cin >> number_of_small_rooms;
    cout <<"Enter the big Rooms" << endl;
    cin >> number_of_big_rooms;
    cout << "Price Per Small Room " << charges_small_room << endl;
    cout << "Price Per Big Room " << charges_big_room << endl;
    cout << "Cost " << (number_of_small_rooms * charges_small_room) + (number_of_big_rooms * charges_big_room) << endl;
    cout << "Tax " << ((number_of_small_rooms * charges_small_room) + (number_of_big_rooms * charges_big_room)) * sales_tax / 100 << endl;
    cout << "Total Estimate " << ((number_of_small_rooms * charges_small_room) + (number_of_big_rooms * charges_big_room) + (number_of_small_rooms * charges_small_room) + (number_of_big_rooms * charges_big_room)) << endl;
    return 0;
}