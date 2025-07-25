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
class LinkedList{  // user define data structure
public:    
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtEnd(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
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
    void Size(){
        cout<<size<<" ";
        cout<<endl;
    }
    void insertAtBeg(int val){
        Node*temp=new Node(50);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertAtIndx(int idx,int val){
        if(idx<0 || idx>size) {
           cout<<"Invalid indx"<<endl;
           return;
        }
        else if(idx==0) return insertAtBeg(val);
        else if(idx==size) return insertAtEnd(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
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
            Node* temp=head;
            for(int i=1;i<=idx;i++)
            {
                temp=temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtBeg(){
        if(size==0){
            cout<<"list is empty!"<<endl;
            return;
        }
        head=head->next;
        size--;
    }
     void deleteAtEnd(){
        if(size==0){
            cout<<"list is empty!"<<endl;
            return;
        }
        Node*temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
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
        else if(idx==0) return deleteAtBeg();
        else if(idx==size-1) return deleteAtEnd();
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
};
int main(){
    LinkedList ll;
    // Insert At last
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.display();
    ll.Size();
  // insert At beg
    ll.insertAtBeg(50);
    ll.display();
    ll.Size();
    // insert At any index:
    ll.insertAtIndx(1,90);
    ll.display();
    ll.Size();
    // cout<<ll.getIndx(1)<<" ";
    ll.deleteAtBeg();
    ll.display();
    ll.deleteAtEnd();
    ll.display();
    ll.deleteAtIndx(0);
    ll.display();
    ll.deleteAtBeg();
    ll.deleteAtBeg();
    ll.deleteAtIndx(0);
    ll.display();
    
    return 0;
}