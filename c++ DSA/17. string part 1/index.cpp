#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[6];
    cout << "Enter a string: "; 
   cin.getline(str, 6, '$'); // read a string with spaces
   for(char ch : str){
    cout << ch << " ";
   }
    cout << str << endl; // constant pointers
    return 0;
}