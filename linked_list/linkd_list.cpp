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
int main(){
    // 10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // forming linked_list
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;

    // Node*ptr=&b;
    // ptr->val=60;
    // cout<<(*ptr).val<<" ";
    // (a.next)->val=50;
    // cout<<(a.next)->val<<" ";
    // cout<<endl;
    // cout<<(b.next)->val<<" ";
    // cout<<endl;
    // cout<<(a.next)->next->next->val<<" ";
    Node temp=a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp=*(temp.next);
    }
    return 0;
}