#include<iostream>
#include<queue>
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
// void LevelOrder(Node* root){
//     if(root==NULL) return;
//     queue<Node*>q;
//     q.push(root);
//     while(!q.empty()){
//        Node* temp=q.front();
//        q.pop();
//        cout<<temp->val<<" ";

//        if(temp->left!=NULL) q.push(temp->left);
//        if(temp->right!=NULL) q.push(temp->right);
//     }
//     cout<<endl;
// }
int level(Node* root){
    if(root==NULL) return 0;
    return 1 + max(level(root->left),level(root->right));
}
void nthLevel(Node* root,int currLevel,int level){
        if(root==NULL) return;
        if(currLevel==level){
            cout<<root->val<<" ";
            return;
            
        }
        nthLevel(root->left,currLevel+1,level);
        nthLevel(root->right,currLevel+1,level);
}
void levelorder(Node* root){
    int n=level(root);
    for(int i=1;i<=n;i++){
        nthLevel(root,1,i);
         cout<<endl;
    }
}

Node* construct(int arr[],int n){
    queue<Node*> q;
    Node* root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node* temp=q.front();
        q.pop();

        Node* L;
        Node* R;
        if(arr[i]!=INT_MIN) L=new Node(arr[i]);
        else L=NULL;
        if(j!=n && arr[j]!=INT_MIN) R=new Node(arr[j]);
        else R=NULL;
        temp->left=L;
        temp->right=R;
        if(L!=NULL) q.push(L);
        if(R!=NULL) q.push(R);
        i+=2;
        j+=2;
    }
    return root;
}
void leftBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL) leftBoundary(root->right);
}
void bottomboundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
        cout<<root->val<<" ";
        return;
    }
    bottomboundary(root->left);
    bottomboundary(root->right);
    
}
void rightBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    rightBoundary(root->right);
    if(root->right==NULL) leftBoundary(root->left);
    cout<<root->val<<" ";
}
void boundary(Node* root){
    leftBoundary(root);
    bottomboundary(root);
    rightBoundary(root->right);

}
int main(){
    int arr[]={1,7,9,2,6,INT_MIN,0,INT_MIN,INT_MIN,8,7,13,INT_MIN};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root =construct(arr,n);
    // levelorder(root);
    boundary(root);
   
}

