#include <iostream>
using namespace std;


void returnsLastCharacterIfN() {
     string letter = "hen";

    //  for(string::iterator it = letter.begin(); end = letter.end(); it =! end; it++)
     int strLength = letter.length();
    for(int i=0; i<letter.length(); i++){
        if(letter[i] == 'n' || letter[i] == 'N'){
            if(i == strLength-1){
                cout << "The Last Letter having " << letter[i] << " The word is " << letter << endl;
            }else {
                cout << "The Last letter don't have N..Exiting....." << endl;
            }
        }
    }
}

int main() {
    // string input;
    // cout << "Enter the String Value" << endl;
    // // getline(cin, input);
    // cin >> input;
    returnsLastCharacterIfN();
    return 0;
}

