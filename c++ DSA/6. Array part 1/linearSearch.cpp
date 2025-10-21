#include <iostream>
using namespace std;

int LS(int arr[], int size, int targ){

    for (int i = 0; i < size; i++)
    {
        if(arr[i]==targ){
            cout << "mil gaya " << arr[i] << endl;
            cout << "index hai " << i << endl;
            return i;
        }
    }
   cout << "nahi mila " << endl;
   return 0;  
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int n = sizeof(arr)/sizeof(int);
    LS(arr, n, 0);

    return 0;
}