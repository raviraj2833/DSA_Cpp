#include<iostream>
using namespace std;
int sum=0;
class Node{ // This is tree Node
public:
    int val;
    Node* left;
    Node* right;  
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    } 
};
void display(Node* root){
        if(root==NULL) return;
        cout<<root->val<<" ";
        display(root->left);
        display(root->right);
}
int size(Node* root){
    if(root==NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}
int MinVal(Node * root){
    if(root==NULL) return INT_MAX;
    int leftMX=MinVal(root->left);
    int rightMX=MinVal(root->right);
    return min(root->val ,min(leftMX,rightMX));
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c =new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* g=new Node(6);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->right=g;
    cout<<MinVal(a);

}