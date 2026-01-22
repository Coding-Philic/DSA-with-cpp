#include <iostream>
using namespace std;

int main(){
int arr[] = {2,-3,6-5,4,2,-1,5};
int maxsum = 0;
int tempsum = 0;
int n = sizeof(arr) / sizeof(int);
for(int i = 0; i <n; i++){
  tempsum += arr[i];
        if(tempsum<0){
            tempsum = 0;
        }
        maxsum = max(maxsum,tempsum);

   cout << endl;
}
cout << "max sum : " << maxsum << endl;
    return 0;
}