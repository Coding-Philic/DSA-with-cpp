#include <iostream>
using namespace std;




int main(){
int height[] = {4,2,0,6,3,2,5};
int n = sizeof(height) / sizeof(int);
int trap = 0;
int left[n];
int right[n];
int leftmax = 0;
int rightmax =0; 
for(int i = 0; i < n; i++){
if(leftmax< height[i]){
    leftmax = height[i];
}
if(leftmax == height[i]){
    cout << i << endl;
}
left[i] = leftmax;
}
left[0] = INT16_MIN;
for(int i = 0; i < n; i++){
    cout << left[i] << endl;
}



for(int i = n-1; i >= 0; i--){
if(rightmax< height[i]){
    rightmax = height[i];
}
right[i] = rightmax;
}
right[n-1] = INT16_MIN;

for(int i = 1; i < n-1; i++ ){
    if(right[i]!=left[i]){
    int bar = min(right[i], left[i]);
    trap += bar - height[i];
    }
}
cout << "trap : " << trap << endl;
    return 0;
}