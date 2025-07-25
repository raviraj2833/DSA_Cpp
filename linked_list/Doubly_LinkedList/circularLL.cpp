#include<iostream>
using namespace std;
class Node{ //  doubly linked list user define data types
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class CLL{  // user define data structure
public:    
    Node* head;
    Node* tail;
    int size;
    CLL(){
        head=tail=NULL;
        size=0;
    } 
     void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0){
          head=temp;
          temp->next=head;
        }

        else{
            Node* t=head;
            while(t->next!=head){
                t=t->next;
            }
             t->next=temp;
            temp->next=head;
        }
        size++;
    } 
    void display(){
        if(head==NULL) return;
        Node* temp=head;
        cout<<temp->val<<" ";
        temp=temp->next;
        while(temp!=head){
            cout<<temp->val<<" "; 
            temp=temp->next;
        }
    } 
};
int main(){
    CLL ll;
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6); 
    ll.display();


}