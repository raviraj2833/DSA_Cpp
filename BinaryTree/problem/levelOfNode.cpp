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
int level(Node* root){
    if(root==NULL) return 0;
    int L=level(root->left);
    int R=level(root->right);

    return 1 + max(L,R);
}
int height(Node* root){
    if(root==NULL) return 0;
    int l=level(root);
    return l-1;
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(4);
    Node* c =new Node(7);
    // Node* d=new Node(2);
    Node* e=new Node(5);
    Node* g=new Node(8);
    a->left=b;
    a->right=c;
    // b->left=d;
    b->right=e;
    c->right=g;
    cout<<"level of tree" << "=" << level(a)<<" "<<endl;
    cout<<"height of tree" << "=" << height(a)<<" ";
}