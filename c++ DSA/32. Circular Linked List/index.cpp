#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node*next;

  Node(int val){
    data = val;
    next = NULL;
  }
};

class CircularList{
    Node*head;
    Node*tail;
public:
CircularList(){
    head = tail = NULL;
}

void insert_head(int val){
    Node*newNode = new Node(val);
    if(head == NULL){
        head = tail = newNode;
        tail->next = head;
    }else{
        newNode->next = head;
        head = newNode;
        tail->next = head;
    }
}

void print(){
    if (head == NULL) return;
    
    cout << head->data << "->";
    Node*temp = head->next;
    while(temp != head){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << temp->data << endl;
}

    void insert_tail(int val){
        Node*newNode = new Node(val);
        if(tail == NULL){
            tail = head = newNode;
            tail->next = head;
        }else{
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }

    void delete_head(){
        
        if(head==NULL){
            cout <<"this is a empty LinkeList ";
        
        }else if(head==tail){
            head == tail ==NULL;
        }else{
            head = head->next;
            tail->next = head;
        }
    }

    void delete_tail(){
        if(head == tail){
            head = tail = NULL;
        }
if(head==NULL){
    cout << "this is a empty LinkedList";
}else{
Node*temp = head;
while(temp->next!=tail){
    temp = temp->next;
}
tail = temp;
tail->next = head;

}
    }
};

int main(){
CircularList cll;
cll.insert_head(1);
cll.insert_head(2);
cll.insert_head(3);
cll.insert_head(4);
cll.insert_head(5);
cll.delete_tail();
cll.delete_head();
cll.print();
    return 0;
}