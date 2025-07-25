#include<iostream>
using namespace std;
class Node{ //  doubly linked list user define data types
public:
    int val;
    Node* next;
    Node* prev; // DLL
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL; // DLL
    }
};
class Deque{  // user define data structure
public:    
    Node* head;
    Node* tail;
    int size;
    Deque(){
        head=tail=NULL;
        size=0;
    }
    void pushfront(int val){
        Node*temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    void pushback(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
    void popfront(){
        if(size==0){
            cout<<"list is empty!"<<endl;
            return;
        }
        head=head->next;
        head->next->prev=NULL;
        size--;
    }
    void popback(){
        if(size==0){
            cout<<"list is empty!"<<endl;
            return;
        }
        Node*temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail->prev=NULL;
        tail=temp;
        size--;
    }
    // display in right direction
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
    int front(){
        cout<<endl;
        return head->val;
    }
    int rear(){
        cout<<endl;
        return tail->val;
    }
};
int main(){
    Deque deq;
    deq.pushback(10);
    deq.pushback(20);
    deq.pushback(30);
    deq.pushback(40);
    deq.pushfront(90);
    deq.popfront();
    deq.display();
   cout<<deq.Size();
   cout<<deq.front()<<" ";
   cout<<deq.rear()<<" ";


}

