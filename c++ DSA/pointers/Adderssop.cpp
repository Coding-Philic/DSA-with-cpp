#include <iostream>
using namespace std;

// void changeA (int *a){
//     *a = 20;
//     cout << *a << endl;
// }

int main(){
    int a = 10;
    int &b = a;
    cout << b << endl;
    // changeA(&a);
    cout << a << endl;
    cout << &a << endl;
    cout << &b << endl;
    b = 30;
    cout << a << endl;
    cout << b << endl;



    // int *ptr = &a;

    // int **ptr2 = &ptr;

    // cout << ptr2 << endl;
    // cout << &ptr << endl;
    // cout << *ptr << endl;

    // float pi = 3.14;
    // float *prt1 = &pi;



    // cout << sizeof(ptr) << endl;
    // cout << sizeof(prt1) << endl;

    // cout << prt1 << endl;
    // cout << ptr << endl;

    return 0;
}