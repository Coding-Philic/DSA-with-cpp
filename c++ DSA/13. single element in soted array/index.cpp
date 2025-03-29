#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,1,2,2,3,4,4,8,8};
    int n = arr.size();
    int st = 0, end = n-1;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]){
            cout << mid << endl;
            return mid;
        }
        if(arr[mid] == arr[mid-1]){
            end = mid;
        }else if(arr[mid] == arr[mid+1]){
            st = mid;
        }else{
            cout << mid << endl;
           return mid;
        }
    }
    return -1;
}