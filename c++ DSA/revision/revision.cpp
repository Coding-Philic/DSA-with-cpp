#include <iostream>
using namespace std;

int main(){
    int marks[5];


    cout << sizeof(marks)/sizeof(int) << endl;
    int l = sizeof(marks)/sizeof(int);
    for(int i = 0; i < l; i++){
        cin >> marks[i];
    }
    for(int i =0; i <l; i ++){
        cout << marks[i]<< endl;
    }
    return 0;
}