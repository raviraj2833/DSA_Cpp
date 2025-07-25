#include<iostream>
#include<queue>
#include<stack>
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
void revdisplay(queue<int>q){  // using stack
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
   cout<<endl;
}
void recRevdisplay(queue<int>& q){
    if(q.empty()) return;
    int frontele=q.front();
    q.pop();
    recRevdisplay(q);

    cout<<frontele<<" ";

    q.push(frontele);
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    // display(q);
    // q.pop();
    // display(q);
    // revdisplay(q);
    recRevdisplay(q);


}