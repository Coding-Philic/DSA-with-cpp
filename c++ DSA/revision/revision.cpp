#include <iostream>
using namespace std;

int main(){

    int arr[] = {5,4,3,9,2};
    int end = (sizeof(arr) / sizeof(int))-1;
    int n = sizeof(arr) / sizeof(int);
    int st = 0;
    while(st<end){
        swap(arr[st], arr[end]);
        st++;
        end--;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    

    return 0;
}