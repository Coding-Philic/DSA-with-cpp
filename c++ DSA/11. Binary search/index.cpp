#include <iostream>
#include <vector>
using namespace std;
int bs(vector<int> arr, int tar){
    int st = 0, end = arr.size()-1;
    while(st<=end){
        int mid = (st+end)/2;
        if(tar > arr[mid]){
            st = mid+1;
        }else if(tar < arr[mid]){
            end = mid+1;
        }else{
            return mid;
        }
    }
    return -1;
}
int main() {
  vector<int> v = {-1,0,3,4,5,9,12};
 int tar = 12;
cout << bs(v,tar) << endl;
}