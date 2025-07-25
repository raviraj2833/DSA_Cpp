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
class DLL{  // user define data structure
public:    
    Node* head;
    Node* tail;
    int size;
    DLL(){
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
        }
        size++;
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
    void Size(){
        cout<<size<<" ";
        cout<<endl;
    }
    void insertAtHead(int val){
        Node*temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    void insertAtIndx(int idx,int val){
        if(idx<0 || idx>size) {
           cout<<"Invalid indx"<<endl;
           return;
        }
        else if(idx==0) return insertAtHead(val);
        else if(idx==size) return insertAtTail(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next->prev=t;
            t->prev=temp;
            temp->next=t;
            size++;
        }
        cout<<endl;
    }
    // get Index
    int getIndx(int idx){
        if(idx<0 || idx>=size){
        cout<<"invalid idx"<<endl;
        return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp=tail;
            for(int i=size;i<=(size-idx);i--)
            {
                temp=temp->prev;
            }
            return temp->val;
        }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"list is empty!"<<endl;
            return;
        }
        head=head->next;
        head->next->prev=NULL;
        size--;
    }
     void deleteAtTail(){
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
    void deleteAtIndx(int idx){
        if(size==0){
            cout<<"Empty list!"<<endl;
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid index!"<<endl;
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            temp->next->prev=temp;
            size--;
        }
    }
};
int main(){
    DLL ll;
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtHead(5);
    ll.insertAtIndx(2,40);
    ll.deleteAtTail();
    ll.deleteAtHead();
    ll.deleteAtIndx(1);
    ll.display(); // 10 20
    cout<<endl;
    cout<<ll.getIndx(1)<<" ";

}