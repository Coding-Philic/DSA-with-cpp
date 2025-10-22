#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int st = 0;
    int end = sizeof(arr)/sizeof(int);
    int targ = 10;
    while(st<end){
        int mid = (st+end)/2;
        if(arr[mid] == targ){
            cout << "mill gaya : " << targ << " is index pe : " << mid << endl; 
           return mid;
        }else if(arr[mid] > targ){
            cout << "condition 1" << endl;
            end = mid-1;
        }else{
            cout << "condition 2" << endl;
            st = mid+1;
        }
    }
cout << "nahi mila dubara check karo ki sahi value de hai ya nahi";
    return 0;
}