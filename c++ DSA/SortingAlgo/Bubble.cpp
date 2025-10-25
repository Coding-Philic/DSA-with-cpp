#include <iostream>
using namespace std;

void bubble(int *arr, int n){
    for(int i =n-1; i >=0; i--){
        for(int j = 0; j<i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main(){
     int arr[] = {9,5,8,7,6,3,4,1};
    int n = sizeof(arr)/sizeof(int);
    bubble(arr,n);

return 0;

}