#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<int>arr, int n, int m, int mid){
    int stu = 1, pages = 0;
    
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]>mid){
            return false;
        }
        if(pages+arr[i]<=mid){
            pages += arr[i];
        }else{
            stu++;
            pages = arr[i];
        }
        if(stu>m){
            return false;
        }
    }
    return true;
    
}

int allocarte(vector<int> arr, int n, int m){
    int sum = 0;
    // int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int st = 0, end = sum, ans =-1;
    while(st <= end){
        int mid = st + (end-st)/2;
       
        if(isvalid(arr,n,m,mid)){
            ans = mid;
            end = mid-1;
        }else{
            st = mid+1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    int n = 4, m = 2;
    cout << allocarte(arr,n,m)<< endl;
    return 0;
}