#include <iostream>
#include <vector>
using namespace std;


bool isvalid(vector<int> arr, int n, int m, int mid){
    int st = 1, unit = 0;
    for (int i = 0; i < n; i++)
    {
        if(unit + arr[i]>mid){
            st++;
        }else{
            unit += arr[i];
        }
        if(st>m){
            return false;
        }
    }
    return true;
    
}

int min(vector<int>arr, int n, int m){
    int sum =0;
    for(int i = 0; i <n;i++){
        sum += arr[i];
    }
    int ans = -1, st = 0, end = sum;
    while(st <= end){
        int mid = st +(end-st)/2;
        if(isvalid(arr,n,m,mid)){
            ans = mid;
            end = mid -1;
        }else{
            st = mid +1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {4,5,5,7};
    int n= 4, m= 2;
cout << "Minimum time required to complete the tasks: " << min(arr, n, m) << endl;
    return 0;
}