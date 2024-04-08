#include <iostream>
using namespace std;

void equalityInArray() {

    double array1[2], array2[2];

    bool equals {false};
    bool not_equals {false};

    cout << "Enter the array values" << endl;

    for(int i=0; i<1; i++) {
        cout << "Insert the Element to Array 1 : " << i << endl;
        cin >> array1[i];

        for(int j=0; j<1; j++){
        cout << "Insert the Element to Array 2 : " << j << endl;
        cin >> array2[j];

        equals = array1[i] == array2[j];
    not_equals = array1[i] != array2[j];
    }
    }

    

    // cout << "Array 1 elements are : " << array1[2] << endl;
    // cout << "Array 2 elements are : " << array2[2] << endl;

    cout << "Checking******checking******" << endl;

    // bool equals {false};
    // bool not_equals {false};

    cout << boolalpha << endl;

    // equals = array1 == array2;
    // not_equals = array1 != array2;

    // equals = array1[i] == array2[j];
    // not_equals = array1[i] != array2[j];

    cout << "Array Equal : " << equals << endl;
    cout << "Array Not Equal : " << not_equals << endl;


}

int main() {
    equalityInArray();
    return 0;
}