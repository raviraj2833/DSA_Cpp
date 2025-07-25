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
void nthLevel(Node* root,int currLevel,int level){
        if(root==NULL) return;
        if(currLevel==level){
            cout<<root->val<<" ";
            return;
            
        }
        nthLevel(root->right,currLevel+1,level);
        nthLevel(root->left,currLevel+1,level);
}
int level(Node* root){
    if(root==NULL) return 0;
    return 1 + max(level(root->left),level(root->right));
}
void rightTOLefttraversal(Node* root){
    int n=level(root);
    for(int i=1;i<=n;i++){
        nthLevel(root,1,i);
         cout<<endl;
    }
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(7);
    Node* c =new Node(9);
    Node* d=new Node(2);
    Node* e=new Node(6);
    Node* f=new Node(9);
    Node* g=new Node(5);
    Node* h=new Node(11);
    Node* i=new Node(5);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    e->left=g;
    e->right=h;
    f->left=i;
    // display the tree Node
    rightTOLefttraversal(a);

}