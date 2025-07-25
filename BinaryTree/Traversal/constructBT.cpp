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
void LevelOrder(Node* root){
    if(root==NULL) return;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
       Node* temp=q.front();
       q.pop();
       cout<<temp->val<<" ";

       if(temp->left!=NULL) q.push(temp->left);
       if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
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

int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9,INT_MIN};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root =construct(arr,n);
    LevelOrder(root);
}

