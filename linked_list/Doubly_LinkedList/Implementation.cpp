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
int main(){
    // 10 20 30 40 50
    Node* a=new Node(10);
    Node* b=new Node(20);
    // Node* c=new Node(30);
    // Node* d=new Node(40);
    // Node* e=new Node(50);
    a->prev=NULL;
    a->next=b;
    b->next=NULL;
    b->prev=a;
    // c->next=d;
    // c->prev=b;
    // d->next=e;
    // d->prev=c;
    // e->next=NULL;
    // e->prev=d;

    Node* temp=b;
    // traverse reverse direction
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
    Node* temp2=a;
    // traverse right way 
    while(temp2){
        cout<<temp2->val<<" ";
        temp2=temp2->next;
    }
}


