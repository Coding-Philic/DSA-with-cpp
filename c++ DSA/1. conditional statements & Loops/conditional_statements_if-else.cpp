#include <iostream>
using namespace std;
 
int main() {
    // int n;
    // cout << "enter your number : ";
    // cin >> n;
    // if(n>=0){
    //     cout << n << " is a positive number ";
    // }
    // else{
    //     cout << n << " is a negative number ";
    // }

    // int age;
    // cout << "Enter your age : ";
    // cin >> age;
    // if(age>=18){
    //     cout << "your age is " << age << endl << "now you are able to vote";
    // }
    // else{
    //     cout << "your age is not 18 or more then 18 " << endl << "your age is " << age << endl << "first become 18 then we think ok ";
    // }


//     int number;
//     cout << "enter your number : ";
//     cin >> number;
//     if(number%2 == 0){
//         cout << number << "is a even number enjoy";
//     }
//     else{
//         cout << number << "is a odd number ";
//     }

//     char ch;
//     cout << "enter your words : ";
//     cin >> ch;
//     if(ch >= 65 && ch <= 90 ){
// cout << "your character is : " << ch << endl << "this is upper case case";
//     }else{
//         cout << "your character is : " << ch << endl << "this is lower case";
//     }

//  int count = 1;
//  int n;
//  cout << "Enter your number : ";
//  cin >> n;
//     while (count <=n)
//     {
//         cout << count << ". Adnan Khan" << " "   ;
//         count++;
//     }

// int n;
// cout << "enter your number : ";
// cin >> n;

// int sum = 0;

// for (int i = 1; i <= n; i = i+2)
// {
//     sum += i;
// }
// cout << sum;

// for (int i = 0; i <= n; i++)
// {
//     if (i%2 != 0)
//     {
//         sum +=i;
//     }
    
// }
// cout << sum;

// int n;
// cout << "Enter your number : ";
// cin >> n;
// int sum = 0;
// int i = 1;

// while (i<=n)
// {
//     if (i % 2 != 0)
//     {
//         sum += i;
//     }
//     i++;
    
// }

// cout << sum;

// while (i <= n)
// {
//     sum += i;
//     i = i + 2;
// }
// cout << sum;

// do
// {
//     cout << "Adnan";
// } while (5<10);

// return 0;

int n;
cout << "enter your number : ";
cin >> n;


for (int i = 2; i <= (n-1); i++)
{
    if (n%i == 0)
    {
        cout << "this number is non prime";
        
    }
    else{
        cout << "this is a prime number";
        break;
    }
    
}

} 