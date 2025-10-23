#include <iostream>
using namespace std;


int maxSubarray(int *arr, int n){
    int sum = INT32_MIN;
    int temp = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        temp = 0;

        for (int j = i; j < n; j++)
        {
         temp += arr[j];
         sum = max(sum,temp);
         }
        cout << endl;
        
    }
    cout << "max sum is : "<< sum << endl;
return 0;
}

int main() {
    int arr[] = {2,-3,6,-5,4,2,2};
    int n = sizeof(arr) / sizeof(int);
    maxSubarray(arr, n);
    return 0;

}