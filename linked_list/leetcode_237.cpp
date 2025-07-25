#include<iostream>
using namespace std;
// creation of linked list
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* deleteNode(Node* head,int targetVal){
    if(head->val==targetVal){
        head=head->next;
        return head;
    }
    Node* temp=head;
    while(temp->next->val!=targetVal){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}
// get middle index
Node* middleidx(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    int mididx=len/2;
    Node* mid=head;
    for(int i=1;i<=mididx;i++){
        mid=mid->next;
    }
    return mid;
}
int main(){
    // 10 20 30 40
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);

    // linking the nodes
    a->next = b;
    b->next = c;
    c->next = d;
    Node*head=a;
    display(head);
    head= deleteNode(head,10);
    display(head);
    cout<<middleidx(head)<<"";
}