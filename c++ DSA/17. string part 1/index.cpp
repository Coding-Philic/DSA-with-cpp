#include <iostream>
#include <cstring>
using namespace std;

int main() {
 string str3;
//  cin >> str3;// we are not able to input whole sentences because when we get space there is a function who stop to input string only we get value before the space
 // thats why we use this funceion;
 getline(cin, str3);//getline is the function who input whole string
for(char ch : str3){
    cout << ch << " ";
 }
 
  cout << str3.length() << endl;
    return 0;
}