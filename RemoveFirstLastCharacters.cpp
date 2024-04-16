#include <iostream>
#include <algorithm>
#include <cstring>
#include <sstream>
using namespace std;


void removeFirstAndLastCharacters(string str) {

    // string str = "string";
    char FirstCharcter;
    char LastCharacter;
    int strLength = str.length();   // returns length integer value
    
 
 //For Finding Last Character Logic
    for(int i=0; i<strLength; i++){
        if(i == strLength-1){
          LastCharacter = str[i];
        //   cout << LastCharacter;
        }
    }

    //For Finding First Character Logic
    for(int i=0; i<strLength; i++){
            FirstCharcter = str[0]; 
    }
    // cout << FirstCharcter;

    // str.erase(remove(str.begin(), str.end(), FirstCharcter), str.end());
    // str.erase(remove(str.begin(), str.end(), LastCharacter), str.end());

    //This only enough to delete a first and Last character of String:
    str.erase(str.begin());
    str.pop_back();
    cout << str;

}

int main() {
    string input;
    cout << "Enter the String You Want to Remove its First and Last characters" << endl;
    cin >> input;
    removeFirstAndLastCharacters(input);
    return 0;
}