#include <iostream>
using namespace std;

int main(){
int arr[] = {1,2,3,4,5};
int maxsum = 0;
int tempsum = 0;
int n = sizeof(arr) / sizeof(int);
for(int i = 0; i <n; i++){
   for(int j = i; j < n; j++){
        for(int k = i; k <= j; k++){
            cout << arr[k];
            tempsum += arr[k];
        }
        maxsum = max(maxsum,tempsum);
        tempsum = 0;
        cout << ", ";
   }
   cout << endl;
}
cout << "max sum : " << maxsum << endl;
    return 0;
}