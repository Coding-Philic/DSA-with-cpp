#include<iostream>
#include <vector>
using namespace std;

int fib(int n){
    if(n==0||n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}


int fibdp(int n, vector<int> &f){
    if(n==0||n==1){
        return n;
    }
    if(f[n]!=-1){
        return f[n];
    }
    f[n] = fib(n-1)+fib(n-2);
    return f[n];
}

int main(){
    int n = 6;
    vector<int> f(n+1, -1);
    cout << fibdp(n, f) << endl;
    return 0;
}