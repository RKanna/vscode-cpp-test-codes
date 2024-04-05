#include <iostream>
#include <climits>

using namespace std;

int main() {
    cout << "char " << sizeof(char) << " bytes" << endl;
    cout << "int " << sizeof(int) << " bytes" << endl;
    cout << "unsigned Int " << sizeof(unsigned int) << " bytes" << endl;
    cout << "long " << sizeof(long) << " bytes" << endl;
    cout << "long long " << sizeof(long long) << " bytes" << endl;
    cout << "short " << sizeof(short) << " bytes" << endl;

    // float

     cout << "float " << sizeof(float) << " bytes" << endl;
      cout << "double " << sizeof(double) << " bytes" << endl;
      cout << "long double " << sizeof(long double) << " bytes" << endl;

    //   Minimum values of INT_MIN, LONG_MIN, CHAR_MIN, SHRT_MIN, LLONG_MIN

    cout << "Minimum Values" << endl;

      cout << "char " << CHAR_MIN << endl;
      cout << "int " << INT_MIN << endl;
      cout << "long " << LONG_MIN << endl;
      cout << "long long " << LLONG_MIN << endl;

      //   Maximum values of INT_MIN, LONG_MIN, CHAR_MIN, SHRT_MIN, LLONG_MIN

      cout << "Maximum Values" << endl;
  
      cout << "char " << CHAR_MAX << endl;
      cout << "int " << INT_MAX << endl;
      cout << "long " << LONG_MAX << endl;
      cout << "long long " << LLONG_MAX << endl;

    return 0;
}