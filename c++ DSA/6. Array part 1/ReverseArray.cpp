#include <iostream>
using namespace std;

    void printArr(int *arr, int n ){
        
for(int i = 0 ; i <n; i++){
    cout << arr[i] << ", ";
}
    }
 
int main(){
    int arr[] = {3,4,2,5,3,6,3,6,2};
    int n = sizeof(arr) / sizeof(int);
    // int rev[n];
// for(int i = n-1 ; i >= 0 ; i--){
//     rev[n-(i+1)] = arr[i];
// }  

// for(int i = 0; i < n; i++){
//     cout << rev[i] << ", " ;
// }

for(int i = 0 ; i < n; i++){
    swap(arr[i], arr[n-i]);
}
printArr(arr, n);

return 0;

}