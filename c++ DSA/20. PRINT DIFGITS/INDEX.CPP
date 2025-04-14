#include <iostream>
using namespace std;

// void digits(int n){
//     for (int  i = 0; i < n; i++){
//         cout << n%10 << endl;
//         n = n /10;
//     }
 
void isArmstrong(int n) {
    int cpn = n;
    int sum = 0;
    while(n!=0){
        int digit = n%10;
        n = n/10;
       
        digit = digit*digit*digit;
        sum += digit; 
        cout << digit << endl; 
    }

    cout << sum << endl;

    if(cpn == sum ){
        cout << "this number is Armstrong " << endl;
    }else{
        cout << "this number is not Armstrong";
    }
}
    

int main() {
    int n = 4654;
  isArmstrong(n);
}