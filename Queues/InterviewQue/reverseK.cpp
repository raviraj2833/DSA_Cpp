#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int> q){
    int n=q.size();
    for(int i=0;i<n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reverseK(int k,queue<int>&q){
    stack<int> s;
    for(int i=1;i<=k;i++){
        s.push(q.front());
        q.pop();
    }
    while(s.size()>0){
        q.push(s.top());
        s.pop();
    }
    // push the n-k left part of queue
    int n=q.size();
    for(int i=0;i<n-k;i++){
        q.push(q.front());
        q.pop();
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    int k=5;
    reverseK(k,q);
    display(q);

}