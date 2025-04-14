#include <iostream>
using namespace std;

void digits(int n){
    for (int  i = 0; i < n; i++){
        cout << n%10 << endl;
        n = n /10;
    }
 
    
}
int main() {
    int n = 5634;
   digits(n);
}