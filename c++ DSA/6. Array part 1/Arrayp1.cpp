#include <iostream>
using namespace std;

int main(){
    // int marks[] = {1,2,3,4,5,6};
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
 
    // cout << marks[4] << endl;
    // cout << marks[70] << endl;

    // cout << sizeof(marks) << endl;



    //output & input Array

    // int arr[5] = {2,34,2,4,6};

    // for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    // {
    //    cout << arr[i] << endl;
    // }
    

    // input array

    int arr[5];

    for(int i = 0; i <sizeof(arr)/sizeof(int); i++){
        cin >> arr[i];
        cout << endl;
    }
    for(int i = 0; i <sizeof(arr)/sizeof(int); i++){
        cout << "student " <<  i << " marks = " <<arr[i] << endl;
    }
    

    return 0;
}