#include <iostream>
using namespace std;

void selection(int *arr, int n){
    for(int i =0; i < n; i++){
        int small = i;
        for(int j = i; j <n; j++){
            if(arr[small] > arr[j]){
                small = j;
            }
        }
        swap(arr[i], arr[small]);
    }

    for(int i = 0; i<n; i++){
        cout << arr[i] << ", ";
    }
}

int main(){
    int  arr[] = {3,4,2,5,3,6,2,7};
    int n = sizeof(arr)/sizeof(int);
    selection(arr, n);
    return 0;
}