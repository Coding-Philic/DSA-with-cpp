#include <iostream>
using namespace std;

void input(int *arr,int n, int m){
}
void output(int *arr,int n, int m){
}

int main() {
    int arr[4][4];
    
    for(int i =0 ; i <4; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i<4 ; i++){
        for(int j =0; j<4; j++){
            cout << arr[i][j] << ", ";
        }
        cout << endl;
    }
   
    return 0;
}