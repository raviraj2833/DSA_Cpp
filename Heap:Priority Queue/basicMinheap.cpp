#include<queue>
#include<iostream>
using namespace std;
int  main(){
  priority_queue<int,vector<int>,greater<int> >pq;
  pq.push(10);
  pq.push(3);
  pq.push(1);
  pq.push(9);
  cout<<pq.top()<<endl; // top:1
  pq.pop(); //  1 is removed and 3 will become new top
  cout<<pq.top(); // top is 3
}