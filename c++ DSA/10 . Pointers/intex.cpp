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
int* ptr2;
int* ptr1 = ptr2;
cout << ptr1 << endl;
cout << ptr2 << endl;
cout << (ptr1 < ptr2) << endl;
    return 0;
}