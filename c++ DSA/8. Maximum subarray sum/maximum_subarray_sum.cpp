#include <iostream>
#include <vector>
using namespace std;

int main() {
   int arr[7] = {3,-4,5,4,-1  ,-8};
   int cs =0 , ms = INT32_MIN;
   for (int i = 0; i < 7; i++)
   {
    cs += arr[i];
    ms = max(cs,ms);
    if (cs < 0)
    {
        cs = 0;
    }
    
   }
   cout << ms;

}