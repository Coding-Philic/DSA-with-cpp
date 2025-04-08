#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: "; 
   cin.getline(str, 100); // read a string with spaces
   
    cout << str << endl; // constant pointers
    return 0;
}