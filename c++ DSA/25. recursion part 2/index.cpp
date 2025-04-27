// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int soted(vector<int>arr,int n, int i ){
     if(i == n){
        return 1;
    }
    if(arr[i]>=arr[i-1]){
       return soted(arr,n,(i+1));
    }else{
        return 0;
    }
    
    }
int main() {
    // Write C++ code here
     vector<int>arr = {2,4,5,16,300,155,1000};
int n = arr.size();
cout << soted(arr,n,1);
    return 0;
}