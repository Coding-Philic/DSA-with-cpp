#include <iostream>
using namespace std;


int main (){
int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

int srow = 0;
int scol = 0;
int erow = 4-1;
int ecol = 4-1;
while((srow<=erow) && (scol < ecol)){
    for(int i = scol; i <= ecol; i++){
        cout << arr[srow][i] << " ";
    }
    for(int j = srow+1; j <= erow; j++){
        cout << arr[j][ecol] << " " ;
    }
    for(int i = ecol-1; i > scol; i--){
        cout << arr[erow][i] << " ";
    }
    for(int j = erow-1; j>srow+1; j--){
        cout << arr[j][ecol] << " ";
    }
    srow++;
    scol++;
    erow--;
    ecol--;
    
}

    return 0;
}