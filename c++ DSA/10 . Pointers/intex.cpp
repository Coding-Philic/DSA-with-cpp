#include <iostream>
#include <vector>
using namespace std;



int main() {
int a = 5;
// change(a);
// cout << a << endl;
// int* p = &a;
// p--;
// cout << p << endl;
// cout << &a << endl;
    
int arr[] = {1,2,3,4,5};
cout << *arr << endl;
cout << *(arr+1) << endl;
cout << *(arr+2) << endl;
cout << *(arr+3) << endl;
    return 0;
}