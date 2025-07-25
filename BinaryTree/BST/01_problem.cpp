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
void display(Node* root){
        if(root==NULL) return;
        cout<<root->val<<" ";
        display(root->left);
        display(root->right);
}
int minimum(Node* root){
  if(!root) return -1;
  if(!root->left and !root->right) return root->val;
  return minimum(root->left);
}
int maximum(Node* root){
  if(!root) return -1;
  if(!root->left and !root->right) return root->val;
  return maximum(root->right);
}
int main(){
    Node* root=new Node(40);
    root->left=new Node(30);
    root->right=new Node(50);
    root->left->left=new Node(25);
    root->left->right=new Node(35);
    root->right->left=new Node(45);
    root->right->right=new Node(60);
    // display the tree Node
    // display(a);
    // cout<<endl;
   cout<<minimum(root)<<endl;
   cout<<maximum(root)<<endl;
   return 0;

}