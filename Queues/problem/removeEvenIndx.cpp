#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void RemEvenPos(queue<int> q){
    int n=q.size();
    for(int i=0;i<n;i++){
        if(i%2!=0){
            int x=q.front();
            cout<<x<<" ";
            q.pop();
            q.push(x);
        }else{
            q.pop();
        }
    }
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    RemEvenPos(q);
    // display(q);

}