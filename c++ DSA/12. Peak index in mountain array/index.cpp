#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {0,3,8,9,10,2};
    int n = nums.size();
    int st= 0, end = n-1;
    int i = 0;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(nums[mid-1] <= nums[mid] && nums[mid] >= nums[mid+1]){
            cout << mid << endl;
        }
        if(nums[mid-1] <= nums[mid] && nums[mid] <= nums[mid+1]){
            st = mid + 1;
        }else if(nums[mid-1] >= nums[mid] && nums[mid] >= nums[mid+1]){
            end = mid - 1;
        }else{
            cout << mid << endl;
            return mid;
        }
        
    }
    cout << -1 << endl;
    return -1;
}