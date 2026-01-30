#include <iostream>
using namespace std;

int disum(int mat[3][3], int n){
    int sum = 0;
for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        if(i == j){
            sum += mat[i][j];
        }
        if(i+j == n-1){
            if(i != j){
                
                sum += mat[i][j];
            }
        }
    }
}
return sum;
}

int main(){
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int sum = disum(mat, 3);
    cout << sum << endl;
    return 0;
}