#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;

    int **ptr2 = &ptr;

    cout << ptr2 << endl;
    cout << &ptr << endl;

    // float pi = 3.14;
    // float *prt1 = &pi;



    // cout << sizeof(ptr) << endl;
    // cout << sizeof(prt1) << endl;

    // cout << prt1 << endl;
    // cout << ptr << endl;

    return 0;
}