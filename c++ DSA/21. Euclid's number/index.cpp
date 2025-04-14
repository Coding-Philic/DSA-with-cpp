#include <iostream>
using namespace std;
int gcd(int a , int b){
    while(a!=0 && b!=0){
        if (a>b)
        {
            a = a %b;
        }else if (b>a)
        {
           b = b%a;
        }else{
            cout << a << endl;
            return 0;
        }
         }
    cout << max(a,b) << endl;
    return 0;
}
int main() {
    int a = 2, b= 3;
   gcd(a,b);
}