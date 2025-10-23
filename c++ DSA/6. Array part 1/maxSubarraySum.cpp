#include <iostream>
using namespace std;


int maxSubarray(int *arr, int n){
    int sum = INT32_MIN;
    int temp = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
          for (int k = i; k <= j; k++)
          {
            cout << arr[k] ;
            temp+=arr[k];
          }
        sum = max(sum,temp);
          temp = 0;
            cout << ",";
        }
        cout << endl;
        
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