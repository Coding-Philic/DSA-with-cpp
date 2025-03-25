#include <iostream>
#include <vector> 
using namespace std;

int main() {
//    vector<char> vec;
//    cout << "vector size : " << vec.size() << endl;

//    vec.push_back('a');
//    vec.push_back('b');
//    vec.push_back('c');

//    cout << "vector size : " << vec.size() << endl;
//    vec.pop_back();
//    cout << "vector size : " << vec.size() << endl;
//    cout << vec.front() << endl;
//    cout << vec.back() << endl;  
//     cout << vec.at(1) << endl;
   
//    for(char val : vec){
// cout << val << endl;
//   }

vector<int> vec;
vec.push_back(0);
vec.push_back(1);
vec.push_back(2);
vec.push_back(3);
vec.push_back(4);

cout << "size of a vector is " << vec.size() << endl;
cout << "capacity of a vector is " << vec.capacity() << endl;
    
 
    return 0;
}