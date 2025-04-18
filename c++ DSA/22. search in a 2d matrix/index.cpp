#include <iostream>
#include <vector>
using namespace std;

bool inner(vector<vector<int>> &mat, int n,int tar,int mid){
    int r = mid, end = n -1,st= 0;
   
    while(st<=end){
        int midd = st + (end-st)/2;
        if(mat[r][midd]==tar){
         cout << "1" << endl;
            return true;
        }else if(mat[r][midd]>tar){
         
            end = midd-1;
        }else{
            st = midd+1;
        }
    }
   
    return false;
}

int main() {

    vector<vector<int>> mat = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int tar = 3;
    int m = mat.size(),n= mat[0].size();
    int st=0, end = m - 1;
    while(st<=end){
        int mid = st + (end-st)/2;
       if(mat[mid][0] <= tar && tar <= mat[mid][n-1]){
          if(inner(mat,n,tar,mid)){

              return 1;
              break;
          }
       }else if(mat[mid][n-1]>tar){
           end = mid-1;
        
       }else {
           st = mid+1;
        }    } 
   
    return 0;  
   }
