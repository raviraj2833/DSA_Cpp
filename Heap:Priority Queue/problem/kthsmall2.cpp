#include<iostream>
#include<queue>
using namespace std;
int main(){
  priority_queue<int> pq;
  int arr[]={9,0,1,-1,3};
  cout<<"Enter the kth term: ";
  int k;
  cin>>k;
  int n=sizeof(arr)/4;
  for(int i=0;i<n;i++){
    pq.push(arr[i]);
    if(pq.size()>k) pq.pop();
  }
  cout<<endl;
  cout<<pq.top()<<" ";
}