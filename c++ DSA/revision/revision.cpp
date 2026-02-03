#include <iostream>
using namespace std;

int search(int mat[3][3], int n, int key){
    int r = 0;
    int c = n-1;
    while(r<n && c >=0 ){
        int cell = mat[r][c];
        if(cell == key){
            cout << "row : " << r << endl << "col : " << c << endl;
            return 1;
        }else if(cell>key){
            c--;
            
        }else{
            r++;
        }
        
    }
    return -1;
}

int main(){
    int mat[3][3] = {{10,20,30},{15,25,35},{27,29,37}};
    int res = search(mat, 3, 29);
    cout << res << endl;

    return 0;
    //hello
}