#include <iostream>
using namespace std;


int maxSubarray(int *arr, int n){
    int sum = INT32_MIN;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
      temp += arr[i];
      sum = max(temp,sum);
      if(temp<0){
        temp = 0;
      }
        
    }
    cout << "max sum is : "<< sum << endl;
return 0;
}

int main() {
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int);
    maxSubarray(arr, n);
    return 0;

}