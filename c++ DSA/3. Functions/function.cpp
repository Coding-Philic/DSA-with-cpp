#include <iostream>
using namespace std;

// int printhello() {
//     cout << "hello\n";
//     return 3;
// }

// double sum(double a, double b) {
//     int s = a+b;
//     return s;
// }

// int min(int a, int b) {
//     if (a>b)
//     {
//        return b;
//     }
//     else{
//         return a;
//     }
    
// }

// int sumofn(int n){
// int sum = 0;
// for (int i = 0; i <= n; i++)
// {
//     sum += i;
// }
// return sum;

// }


// int fact(int n) {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//    return fact; 
// }

// void fun() {
//     int x = 5;
//     cout << x;
// }

// int sum(int a, int b) {
//     a = a+10;
//     b = b+10;
//     return a+b;
// }


// int changex(int x) {
//     x = 2*x;
//     cout << "x = " << x << endl;
//     return x;
// }

// int sum(int num) {
//     int sum = 0;
//     while (num > 0)
//     {
//         int last = num%10;
//         num = num/10;
// sum = sum + last;

//     }
//     return sum;
// }

int ncr(int n, int r) {
    int fn = 1;
    int fr = 1;
    int def = n-r;
    int deff = 1;
    for (int i = 1; i <= n; i++)
    {
        int h = i;
        fn *= h;
    }
    
    for (int i = 1; i <= r; i++)
    {
        int y = i;
        fr *= y;
    }
    
    for (int i = 1; i <= def; i++)
    {
        int z = i;
        deff *= z;
    }
    
    int ncr = fn / (fr*deff);
    return ncr;

}




int main() {
int n;
cout << "Enter your number of n : ";
cin >> n;
int r;
cout << "Enter your number of r : ";
cin >> r;

int nc = ncr(n,r);
cout << nc << endl;







// int n;
// cout << "Enter your number : ";
// cin >> n;
// sum(n);    
// cout << sum(n);

// int x = 10;
// int c = changex(x);
// cout << x;

//     int a=5, b=4;
//    int s = sum(a,b);
//    cout << s << endl;
//     cout << a << endl;
//     cout << b << endl;
//   int val = printhello();
//   cout << val << endl;
//   cout << printhello();
// int a;
// cout << " Enter your first valus : ";
// cin >>a;
// int b;
// cout << "Enter your second value : ";
// cin >>b;

// cout << sum(5.6,6.5);
// int n;
// cout << "Enter your number : ";
// cin >> n;

// // cout << sumofn(n);

// cout << fact(n);

// fun();

// cout << x;
}