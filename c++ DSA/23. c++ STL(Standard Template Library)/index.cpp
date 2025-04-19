#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Example 1: Vector banakar elements add aur remove karna (yeh abhi commented-out hai)
    // vector<int> vec; // Ek khaali vector banaya
    // vec.push_back(1); // Vector ke end mein 1 add kiya
    // vec.push_back(2); // Vector ke end mein 2 add kiya
    // vec.push_back(3); // Vector ke end mein 3 add kiya
    // vec.push_back(4); // Vector ke end mein 4 add kiya
    // vec.push_back(5); // Vector ke end mein 5 add kiya
    // vec.emplace_back(6); // Vector ke end mein 6 add kiya (zyada efficient tarika)
    // vec.pop_back(); // Last element (6) ko remove kiya
    // for(int val:vec) { // Vector ke har element ko iterate karke print kiya
    //     cout << val << endl; // Har element ko nayi line mein print kiya
    // }
    // cout << vec.size() << endl; // Vector ke total elements ki count print ki
    // cout << vec.capacity() << endl; // Vector ki memory capacity print ki

    // Example 2: Vector ko specific values ke saath initialize karna (yeh bhi commented-out hai)
    // vector<int> vec = {1, 2, 3, 4, 5}; // Vector ko 5 elements ke saath initialize kiya
    // for(int val : vec) { // Vector ke har element ko iterate karke print kiya
    //     cout << val << endl; // Har element ko nayi line mein print kiya
    // }

    // Example 3: Fixed size ka vector banakar sabhi elements ko initialize karna
    // vector<int> vec(10, 10); // Ek vector banaya jisme 10 elements hain, sabhi ki value 10 hai
    // for(int val : vec) { // Vector ke har element ko iterate karke print kiya
    //     cout << val << " "; // Har element ko space ke saath print kiya
    // }
    // Output: 10 10 10 10 10 10 10 10 10 10

    // Example 4: Vector ke elements ko modify karna
    vector<int> vec1 = {1, 2, 3, 4, 5}; // Ek vector banaya jisme 5 elements hain
    // vec1.erase(vec1.begin() + 1, vec1.begin() + 3); // Index 1 se 2 tak ke elements ko delete karna (commented-out)
    vec1.insert(vec1.begin() + 2, 100); // Index 2 par 100 insert kiya
    vector<int> vec2(vec1); // vec1 ka ek copy banaya vec2 ke andar

    // vec2 ke elements ko print karna
    for (int val : vec2) { // Har element ko iterate karke print karenge
        cout << val << " "; // Har element ko space ke saath print kiya
    }
    // Output: 1 2 100 3 4 5
}
