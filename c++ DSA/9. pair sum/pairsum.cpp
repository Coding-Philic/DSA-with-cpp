#include <iostream>
#include <vector>
using namespace std;

vector<int> vec(vector<int> num, int target) {
 
    vector<int> ans;
    for (int fr = 0; fr < 4; fr++)
    {
        int v1 = num[fr];
        for (int sc = 0; sc < 4; sc++)
        {
            int v2 = num[sc];
            if (v1+v2 == target)
            {
                cout << num[fr] << "+" << num[sc] << "=" << target << endl;
              ans.push_back(v1);
              ans.push_back(v2);
              return ans;
            }
            
        }
        
    }
    return ans;
}

int main() {
    vector<int> num = {2,7,11,15};
    int target = 26; 

   
    vec(num,target);
    
     
}