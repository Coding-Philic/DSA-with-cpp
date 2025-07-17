#include <iostream>
#include <vector>
#include <stack>
using namespace std;


int main(){
    vector <int> arr = {5,4,8,0,1,2,7,5};
    int n = arr.size();

    vector <int>ans(n,0);
    stack <int> s;
    for(int i = n-1; i>=0 ; i--){
        while(s.size()>0&&s.top()<=arr[i]){
            // cout << s.top();
            s.pop();
        }

        if(s.empty()){
            ans[i] = -1;
        }else{
            ans[i] = s.top();
        }

        s.push(arr[i]);
    }

    for(int val : ans){
        cout << val << " " <<"|" << " ";
    }
return 0;
}