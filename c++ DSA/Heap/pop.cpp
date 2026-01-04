#include <iostream>
#include <string>
#include <vector>
using namespace std;



class Heap{
    vector<int> vec;
public:

    void push(int val){
        vec.push_back(val);

        int x = vec.size()-1;
        int parI = (x-1)/2;

        while(parI >= 0 && vec[x] > vec[parI]){
            swap(vec[x],vec[parI]);
            x = parI;
            parI = (x-1)/2;
        }
    }

    void heapify(int i){

        if(i >= vec.size()){
            return;
        }

        int l = 2*i +1;
        int r = 2*i +2;

        int maxIdx = i;

        if(l<vec.size() && vec[l]>vec[maxIdx]){
            maxIdx = l;
        }

        if(r<vec.size() && vec[r]>vec[maxIdx]){
            maxIdx = r;
        }

        swap(vec[i],vec[maxIdx]);
        if(maxIdx != i ){
            heapify(maxIdx);
        }
    }

    void pop(){
        swap(vec[0],vec[vec.size()-1]);
        vec.pop_back();

        heapify(0);
    }

    int top(){
        int x = vec[0];
        return x;
    }

    bool empty(){
        return vec.size() == 0;
    }
};

int main(){
    Heap heap ;
    heap.push(10);
    heap.push(1);
    heap.push(100);

    cout << heap.top() << endl;
    heap.pop();
    cout << heap.top() << endl;
    return 0;
}