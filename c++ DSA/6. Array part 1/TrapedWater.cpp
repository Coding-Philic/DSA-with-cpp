#include <iostream>
using namespace std;


void trap(int *arr, int  n){
    int leftMax[20000], rightMax[20000];
    leftMax[0] = arr[0];
    rightMax[0] = arr[n-1];
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

          int waterTraped = 0;
          for(int i =0; i <n; i++){
            int currWater = min(leftMax[i], rightMax[i]-arr[i]);
            if(currWater > 0) {
                waterTraped+=currWater;
            }
          }
          cout << waterTraped << endl;

}

int main(){
int arr[] = {4,2,5,2,6,2,8,1,9,1,8};
int n  = sizeof(arr) / sizeof(int);
trap(arr,n);
    return 0;
}