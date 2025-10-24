#include <iostream>
using namespace std;


void trap(int *arr, int  n){
    int leftMax[20000], rightMax[20000];
    leftMax[0] = INT32_MIN;
    rightMax[0] = INT32_MIN;
    cout << leftMax[0] << ",";

    for(int i = 1; i <n; i++){
        leftMax[i] = max(leftMax[i-1], arr[i-1]);
        cout << leftMax[i] <<"," ;
       }
       cout << endl;
       for(int i = n-2; i >=0; i--){
           rightMax[i] = max(rightMax[i+1], arr[i+1]);
           cout << rightMax[i] <<"," ;
          }

          int waterTraped

}

int main(){
int arr[] = {4,2,5,2,6,2,8,1,9,1,8};
int n  = sizeof(arr) / sizeof(int);
trap(arr,n);
    return 0;
}