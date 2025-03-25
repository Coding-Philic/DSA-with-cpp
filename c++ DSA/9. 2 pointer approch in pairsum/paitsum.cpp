#include <iostream>
#include <vector>
using namespace std;

vector<int> vec(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();
    int i = 0, j=n-1;
    while (i<j)
    {
        int ps = nums[i] + nums[j];
        if (ps>target)
        {
            j--;
        }else if (ps<target)
        {
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        
        
    }
    
}

int main() {
    vector<int>nu = {2,7,11,15};
    int tar = 26;

    vector<int> ve = vec(nu,tar);
    cout << ve[0] << "," << ve[1];

}