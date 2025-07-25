#include<iostream>
using namespace std;

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
// preorder traversal
void preorder(Node* root){
        if(root==NULL) return; // base case
        cout<<root->val<<" "; // work
        preorder(root->left); // call 1
        preorder(root->right); // call 2
}
// inorder traversal
void inorder(Node* root){
        if(root==NULL) return; // base case
        inorder(root->left); // call 1
        cout<<root->val<<" "; // work
        inorder(root->right); // call 2
}
// postorder traversal
void postorder(Node* root){
        if(root==NULL) return; // base case
        cout<<root->val<<" "; // work
        postorder(root->right); // call 2
        postorder(root->left); // call 1
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c =new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    // display the tree Node
    cout<<"preorder traversal:";
    preorder(a);
    cout<<endl;
    cout<<"Inorder traversal:";
    inorder(a);
    cout<<endl;
    cout<<"postorder traversal:";
    postorder(a);

}