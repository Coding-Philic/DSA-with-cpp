#include <iostream>
using namespace std;

int main(){
    int marks[5];


    cout << sizeof(marks)/sizeof(int) << endl;
    int l = sizeof(marks)/sizeof(int);
    for(int i = 0; i < l; i++){
        cin >> marks[i];
    }
    int lar = marks[0];
    int min = marks[0];
    int midx = 0;
    int minidx =0;
    for(int i = 0; i <l; i++){
        if(lar < marks[i]){
            lar = marks[i];
            midx = i;
        }

        if(min > marks[i]){
            min = marks[i];
            minidx = i;
        }

    }
    cout  << "maxidx : " << midx << endl;
    cout << "max value : " << lar << endl;
    cout << "minidx : " << minidx << endl;
    cout << "min value : " << min << endl; 
    return 0;
}