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
class DCLL{  // user define data structure
public:    
    Node* head;
    Node* tail;
    int size;
    DCLL(){
        head=tail=NULL;
        size=0;
    }
    void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
            tail->next=head;
            head->prev=tail;
        }
        size++;
    }
    // display in right direction
    void display(){
        Node* temp=head;
        cout<<temp->val<<" ";
        temp=temp->next;
        while(temp!=head){
        cout<<temp->val<<" ";
        temp=temp->next;
        }
        cout<<endl;
    }
    void Size(){
        cout<<size<<" ";
        cout<<endl;
    }
};
int main(){
    DCLL ll;
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.insertAtTail(50);
    ll.display();

}