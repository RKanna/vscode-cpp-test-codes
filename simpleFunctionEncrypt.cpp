//Simple Function to Encrypt Messages and Decrypt Messages Challenge Code

//used XOR Operator for Encrypting a message

 //XOR gives false when both are equal, 1 

#include <iostream>
using namespace std;
void encryptFun(string message, string keyValue);

void encryptFun(string message, string keyValue) {
//    string message {};
//    string keyValue {};
//    cout << "Enter the Message to encrypt" << endl;
//    cin >> message;
//    cout << "Enter the Key value" << endl;
//    cin >> keyValue;

   long long address {};
   for(size_t i{0}; i<message.size(); i++){
      message[i] ^= keyValue[i];
      if(message[i] != keyValue[i]) {
        keyValue[i]++;
        cout << keyValue[i];
        
      }
   }
    
//    for(size_t j{0}; j<keyValue.size(); j++)
//     cout << keyValue[j] << endl;

    
}

int main() {
    
    encryptFun("Hello Its me Kannan", "Secret");   //Function calling
    return 0;
}