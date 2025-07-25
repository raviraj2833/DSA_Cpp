#include <iostream>
using namespace std;
// creation of linked list
class Node{ // user define data types
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class Queue{  // user define data structure
public:    
    Node* head;
    Node* tail;
    int size;
    Queue(){
        head=tail=NULL;
        size=0;
    }
    void push(int val){
        Node* back=new Node(val);
        if(size==0) head=tail=back;
        else{
            tail->next=back;
            tail=back;
        }
        size++;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
        }
        cout<<endl;
    }
    int Size(){
        return size;
        }
    void pop(){
        if(size==0){
            cout<<"Queue is empty!"<<endl;
            return;
        }
        Node* temp=head;
        head=head->next;
        delete(temp); // delete the node in memory.....
        size--;
    }
    int front(){
        if(size==0){
            cout<<"Queue is empty!!";
            return -1;
        }
        return head->val;
    }
    int rear(){
        if(size==0){
            cout<<"Queue is empty!";
            return -1;
        }
        return tail->val;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.display();
    q.pop();
    q.display();
    q.pop();
    cout<<q.front()<<" ";
    cout<<endl;
    cout<<q.rear()<<" ";
    cout<<endl;
    cout<<q.Size()<<" ";
    return 0;
}