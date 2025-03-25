#include <iostream>
using namespace std;

int main() {
    // int n;
    // cout << "enter your number : ";
    // cin >> n;
    // for (int j = 1; j <= n; j++)
    // {
        
    //     for (int i = 1; i <= n; i++)
    //     {
    //         cout << i;
    //     }
    //    cout << endl; 
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;       
    // }

// int n;
// cin >> n;

// for (int i = 0; i <= n; i++)
// {
//     char ch = 'A';
//    for (int j = 0; j <= n; j++)
//    {
//     cout << ch;
//     ch = ch +1;
//    }
//    cout << endl;
   
// }

// int n;
// cout << "enter your number : ";
// cin >> n;

// int num = 1;
// for (int i = 0; i <n; i++)
// {
//     for (int j = 0; j <n; j++)
//     {
//         cout << num << " ";
//         num += 1;
//     }
//    cout << endl ;
// }

// cout << num;

// int n;
// cout << "enter your number : ";
// cin >> n;
// char ch = 'A';

// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//        cout << ch << " ";
//        ch = ch + 1;
//     }
//     cout << endl;
// }

// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < i+1; j++)
//     {
//         cout << "*" << " ";
//     }
//    cout << endl; 
// }


// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j <= i; j++)
//     {
//         cout << i+1 << "  ";
//     }
//     cout << endl;
// }

// for (int i = 0; i < n; i++)
// {
//    for (int j = n-i; j > 0; j--)
//    {
//     cout << "*" << " ";
//    }
//  cout << endl;  
// }

// int mul = 1;

//   for (int i = 1; i <= n; i++)
//   {
//     mul *= i;
//   }
    
//   cout << mul;  

// int num = n;
// for (int i = 0; i < n; i++)
// {
//    cout << num - i;
// }


// char ch = 'A';

// for (int i = 1; i < n; i++)
// {
//    for (int j = 0; j < i; j++)
//    {
//     cout << ch;
//    }
//    ch += 1;
//   cout << endl; 
// }

// int sum = 1;

// for (int i = 0; i <= n; i++)
// {
// for (int j = i; j > 0; j--)
// {
//    cout << sum << " ";
//    sum++; 
// }

   
//     cout << endl;
    
// }

// char ch = 'A';

// for (int i = 0; i < n; i++)
// {
//     for (int j = i + 1; j > 0; j--)
//     {
//         cout << ch << " ";
//         ch += 1;
//     }
//     cout << endl;
// }

// for (int i = 0; i < n; i++)
// {
//    for (int j = 0; j < i; j++)
//    {
//     cout << "  ";
//    }
//    for (int k = 0; k < n-i; k++){

//        cout << i+1 << " ";
//    }
   
//    cout << endl; 
//    }
   
// char ch = 'A';

// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < i; j++)
//     {
//         cout << " ";
//     }

//     for (int j = 0; j < n-i; j++)
//     {
//         cout << ch;
//     }
//     ch += 1;
//     cout << endl;
    

// }


// for (int i = 0; i < n; i++)
// {
//    for (int j = 0; j < n-(i-1); j++)
//    {
//     cout << " ";
//    }

//    for (int j = 1; j <= i+1; j++)
//    {
//     cout << j;
//    }

// for (int j = i; j >= 1; j--)
// {
//     cout << j;
// }

   
   

//  cout << endl;  
// }

// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < n+(-1-i); j++)
//     {
//         cout << ".";
//     }
// cout << "*";
//     for (int j = 0; j < i; j++)
//     {
//         cout << ".";
//     }

//     for (int j = 0; j < i ; j++)
//     {
//         cout << ".";
//     }
//     cout << "*";
//     cout << endl;
   
    
// }

// for (int i = 0; i < n-1; i++)
// {
//     for (int j = 0; j < i ; j++)
//     {
//         cout << ".";
//     }
//     cout << "*";
//     for (int j = 1; j < n-i; j++)
//     {
//         cout << ".";
//     }

//     for (int j = 1; j < n-i; j++)
//     {
//        cout << ".";
//     }
    
//     cout << "*";
//     cout << endl;
// }

int n;
cout << "Enter your number : ";
cin >> n;

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n+(-1-i); j++)
    {
        cout << ".";
    }
 cout << "*";

 for (int j = 0; j < i; j++)
     {
         cout << ".";
     }
 
     for (int j = 0; j < i-1 ; j++)
     {
         cout << ".";
     }

     if (i>0)
     {
       cout << "*";
     }
     

    cout << endl;
}

for (int i = 0; i < n-1; i++)
{
    for (int j = 0; j < i+1 ; j++)
    {
        cout << ".";
    }
    cout << "*";
    for (int j = 1; j < n+(-1-i); j++)
    {
        cout << ".";
    }

    for (int j = 1; j < n+(-2-i); j++)
    {
       cout << ".";
    }
    
    if (i<n-2)
    {
       cout << "*";
    }
    
    cout << endl;
}


}




