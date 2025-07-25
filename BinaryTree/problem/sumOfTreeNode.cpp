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
int sumOfNode(Node * root){
    if(root==NULL) return 0;
    return root->val + sumOfNode(root->left) + sumOfNode(root->right);
}
void sumNode(Node* root){
    if(root==NULL) return;
    sum+=root->val;
    cout<<sum<<" ";
    sumNode(root->left);
    sumNode(root->right);
}
int size(Node* root){
    if(root==NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}
int MaxVal(Node * root){
    if(root==NULL) return INT_MIN;
    int leftMX=MaxVal(root->left);
    int rightMX=MaxVal(root->right);
    return max(root->val ,max(leftMX,rightMX));
}
int main(){
    Node* a=new Node(5);
    Node* b=new Node(14);
    Node* c =new Node(3);
    Node* d=new Node(6);
    Node* e=new Node(2);
    Node* g=new Node(1);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->right=g;
    // display(a);
    cout<<sumOfNode(a)<<" "<<endl;
    cout<<size(a)<<" "<<endl;
    cout<<MaxVal(a);

    // sumNode(a);

}