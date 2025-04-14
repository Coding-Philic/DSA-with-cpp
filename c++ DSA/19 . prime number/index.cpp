#include <iostream>
using namespace std;
int main() {
    int n = 32;
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i==0){
            cout << "non prime" << endl;
            return 0;
        }
    }
    cout << "prime" << endl;
    return 0;
}