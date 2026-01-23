#include <iostream>
using namespace std;

int main(){
int arr[] = {7,1,5,3,6,7};
int n = sizeof(arr) / sizeof(int);
int maxprof = 0;
int currprof = 0;
int idx1 = 0;
int idx2 = 0;
for(int i = 0; i < n; i++){
    for(int j = i+1; j <n; j++){
        currprof = arr[j] - arr[i];
        if(currprof>maxprof){
            maxprof = max(currprof, maxprof);
            idx1 = i;
            idx2 = j;
        }
        currprof = 0;
    }
}
cout << maxprof << endl;
cout << "(" << idx1 << "," << idx2 << ")" ;

    return 0;
}