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
            return a;
        }
         }
    int hcf = max(a,b);
    return hcf;
}

int lcm(int a , int b, int gcd){
   int lcm = a*b /gcd;
   return lcm;
}
int main() {
    int a = 2, b= 3;
   int hcf = gcd(a,b);
   int locm = lcm(a,b,hcf);

   cout << "the HCF or GCD of numbers is : " << hcf << endl;
   cout << "the LCM of numbers is : " << locm << endl;
}