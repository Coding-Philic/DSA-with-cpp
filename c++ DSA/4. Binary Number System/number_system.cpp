#include <iostream>
using namespace std;

int dectobi(int num) {
    int ans = 0, p=1;
    while (num>0) 
    {
        int rem = num%2;
        num = num/2;
        ans += (rem *p);
        p *= 10;
    }
    return ans;
}


// int bintodec(int num) {
//     int sum = 0, p =1;
//     while (num>0)
//     {
//         int rem = num%10;
//         num = num/10;
//         sum += (rem*p);
//         p *= 2;
//     }
//     return sum;

// }





int main() {

// cout << bintodec(1100101);



// for (int i = 0; i < num; i++)
// { 
//     cout << dectobi(i) << endl;
// }


// cout << dectobi(num);

}