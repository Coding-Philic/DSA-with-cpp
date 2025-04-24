#include <iostream>
using namespace std;

// printnum function ka kaam hai ek number ko print karna aur usse chhota number recursively call karna
// Agar n == 1 ho jata hai, to base case trigger hota hai aur recursion stop ho jata hai
// Har call ke baad current number ko print kiya jata hai aur function n-1 ke saath dobara call hota hai
void printnum(int n ){
    if(n == 1){ // Base case: jab n 1 ho jaye, recursion yahin ruk jayega
        cout << n << " "; // n ko print karo
        return; // recursion ko stop karne ke liye return
    }
    cout << n << " "; // current number ko print karo
    printnum(n-1); // function ko n-1 ke saath recursively call karo
}

int main(){
    int n = 1000; // n ko initialize kiya 1000 ke saath
    printnum(n); // printnum function ko call kiya jo 1000 se 1 tak ke numbers ko print karega
    return 0; // program successfully terminate karega
}