#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
  priority_queue<int ,vector<int>,greater<int> > pq;
  int arr[]={0,3,1,5,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  int k;
  cout<<"Enter the kth term: ";
  cin>>k;
  for(int i=0;i<n;i++){
    pq.push(arr[i]);
    if(pq.size()>k){
      pq.pop();
    }
  }
  cout<<"kth largest element is: " <<pq.top()<<endl;
}