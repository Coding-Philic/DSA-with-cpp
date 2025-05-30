#include <iostream>
using namespace std;

class node{
    public:
int data;
node*next;
node*prev;

node(int val){
    data = val;
    next = prev = NULL;
}
};

class DoublyList{
    node*head;
    node*tail;

    public:
    DoublyList(){
        head = tail = NULL;
    }

    void Push_front(int val){
        node*newNode = new node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

   

    void print(){
        node*temp = head;
        while(temp != NULL){
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
     void push_back(int val){
        node*newNode = new node(val);

        if(head==NULL){
            head = tail = newNode;
        }else{
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }

    }

    void pop_front(){
        if(head == NULL){
            cout << "linked list is empty" << endl;
        }else{
        head = head->next;
        head->prev = NULL;
    }
}
void pop_back(){
    if(head==NULL){
        cout << "Linked list is empty" << endl;
    }else{
        tail= tail->prev;
        tail->next = NULL;
    }
}
};


int main(){

DoublyList dll; 
dll.Push_front(1);
dll.Push_front(2);
dll.Push_front(3);
dll.push_back(1);
dll.push_back(2);
dll.push_back(3);
dll.pop_front();
dll.pop_back( );
dll.print();
    return 0;
}