#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;

int main() {
    // Example 1: Vector (Dynamic Array)
    // // Vector ek dynamic array ki tarah hota hai jo size badha ya ghata sakta hai.
    // // Difference: Random access fast hota hai (O(1)), lekin insertion aur deletion slow hota hai (O(n)) kyunki shifting karni padti hai.
    // // Real-life analogy: Ek train ke bogies jo ek line mein hain aur har bogie ka number directly access kar sakte hain.
    // vector<int> vec = {1, 2, 3, 4, 5}; // Vector ko initialize kiya
    // vec.push_back(6); // End mein ek element add kiya
    // vec.pop_back(); // Last element ko remove kiya
    // for (int val : vec) { // Har element ko print karna
    //     cout << val << " ";
    // }
    // cout << endl;

    // // Example 2: List (Doubly Linked List)
    // // List ek doubly linked list hoti hai jo sequential data store karti hai.
    // // Difference: Random access slow hota hai (O(n)), lekin insertion aur deletion fast hota hai (O(1)) kyunki shifting nahi hoti.
    // // Real-life analogy: Ek chain jisme har link ke dono taraf se access aur modify kar sakte hain.
    // list<int> l = {1, 2, 3, 4, 5}; // List ko initialize kiya
    // l.push_back(6); // End mein ek element add kiya
    // l.push_front(0); // Start mein ek element add kiya
    // l.pop_back(); // Last element ko remove kiya
    // l.pop_front(); // First element ko remove kiya
    // for (int val : l) { // Har element ko print karna
    //     cout << val << " ";
    // }
    // cout << endl;

    // // Example 3: Deque (Double-Ended Queue)
    // // Deque ek double-ended queue hoti hai jo dono ends se elements add aur remove karne ki facility deti hai.
    // // Difference: Random access fast hota hai (O(1)), aur insertion aur deletion dono ends se fast hota hai (O(1)).
    // // Real-life analogy: Ek bus jisme dono darwazon (front aur back) se log chadh aur utar sakte hain.
    // deque<int> d;
    // d.push_back(1); // End mein ek element add kiya
    // d.push_back(2); // End mein ek aur element add kiya
    // d.emplace_back(3); // End mein ek aur element add kiya (zyada efficient tarika)
    // d.emplace_back(4); // End mein ek aur element add kiya
    // d.push_front(6); // Start mein ek element add kiya
    // d.emplace_front(7); // Start mein ek aur element add kiya (zyada efficient tarika)
    // d.pop_back(); // Last element ko remove kiya
    // d.pop_front(); // First element ko remove kiya
    // for (int val : d) { // Har element ko print karna
    //     cout << val << " ";
    // }
    // cout << endl;


    // pair<int,int> par = {3,4};
    // pair<int,char> pa = {3,'a'};
    // cout << par.first << endl;
    // cout << pa.first << endl;
    // cout << pa.second << endl;
    // cout << par.second << endl;

    // pair<pair<int,int>,int> p = {{3,4},5};
    // cout << p.second << endl;
    // cout << p.first.first << endl;
    // cout << p.first.second << endl;

    // vector<pair<int,int>> vec = {{1,2},{3,4},{5,6}}; // Initialize a vector of pairs with some values

    // vec.push_back({7,4}); // push_back: Add a new pair {7,4} at the end of the vector. 
    //                       // It creates the pair first and then adds it to the vector.
    
    // vec.emplace_back(2,3); // emplace_back: Directly construct the pair {2,3} at the end of the vector.
    //                        // It is more efficient than push_back because it avoids creating a temporary object.
    
    // for(pair<int,int> a : vec) { // Iterate through the vector and print each pair
    //     cout << a.first << " " << a.second << endl;
    // }
    
    // for(auto a : vec) { // Another way to iterate using auto
    //     cout << a.first << " " << a.second << endl;
    // }
    
    // Differences between Vector, List, and Deque:
    // 1. Vector:
    //    - Random access fast hota hai (O(1)).
    //    - Insertion aur deletion slow hota hai (O(n)) kyunki shifting karni padti hai.
    //    - Use jab sequential data aur fast access chahiye ho.
    //    - Real-life analogy: Train ke bogies.
    // 2. List:
    //    - Random access slow hota hai (O(n)).
    //    - Insertion aur deletion fast hota hai (O(1)) kyunki shifting nahi hoti.
    //    - Use jab frequent insertion aur deletion chahiye ho.
    //    - Real-life analogy: Chain ke links.
    // 3. Deque:
    //    - Random access fast hota hai (O(1)).
    //    - Insertion aur deletion dono ends se fast hota hai (O(1)).
    //    - Use jab dono ends se operations chahiye ho.
    //    - Real-life analogy: Bus jisme dono darwazon se log chadh aur utar sakte hain.



    /*non sequential container*/
    return 0;
}
