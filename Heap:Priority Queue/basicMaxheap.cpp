#include<iostream>
#include<queue>
using namespace std;
int main(){
  std::priority_queue<int> pq;
  pq.push(10);
  pq.push(20);
  pq.push(30);
  pq.push(50);
  pq.push(2);
  pq.push(0);
  pq.push(-1);
  while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
  }
}