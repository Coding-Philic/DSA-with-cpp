#include <iostream>
using namespace std;

// printnum function ka kaam hai ek number ko print karna aur usse chhota number recursively call karna
// Agar n == 1 ho jata hai, to base case trigger hota hai aur recursion stop ho jata hai
// Har call ke baad current number ko print kiya jata hai aur function n-1 ke saath dobara call hota hai
void printnum(int n)
{
    if (n == 1)
    {                     // Base case: jab n 1 ho jaye, recursion yahin ruk jayega
        cout << n << " "; // n ko print karo
        return;           // recursion ko stop karne ke liye return
    }
    cout << n << " "; // current number ko print karo
    printnum(n - 1);  // function ko n-1 ke saath recursively call karo
}

// fact function ka kaam hai kisi number ka factorial calculate karna
// Agar n == 0 ho jata hai, to base case trigger hota hai aur 1 return hota hai
// Har call ke baad n ko uske factorial ke liye recursively multiply kiya jata hai
int fact(int n)
{
    if (n == 0)
    {             // Base case: jab n 0 ho jaye, factorial 1 hota hai
        return 1; // 0! = 1
    }
    return n * fact(n - 1); // n ko uske factorial ke liye recursively multiply karo
}

// sum function ka kaam hai 1 se n tak ke numbers ka sum calculate karna
// Agar n == 0 ho jata hai, to base case trigger hota hai aur 0 return hota hai
// Har call ke baad n ko uske chhote numbers ke sum ke saath add kiya jata hai
int sum(int n)
{
    if (n == 0)
    {               // Base case: jab n 0 ho jaye, sum 0 hoga
        return 0;   // 0 return karo
    }

    int s = n + sum(n - 1); // n ko uske chhote numbers ke sum ke saath add karo
    return s;               // final sum return karo
}

int main()
{
    int n = 4;               // n ko initialize kiya 4 ke saath
    printnum(n);             // printnum function ko call kiya jo 4 se 1 tak ke numbers ko print karega
    cout << endl;            // ek new line ke liye
    cout << fact(5) << endl; // fact function ko call kiya jo 5 ka factorial calculate karega aur print karega
    cout << sum(10) << endl; // sum function ko call kiya jo 1 se 10 tak ka sum calculate karega aur print karega
    return 0;                // program successfully terminate karega
}