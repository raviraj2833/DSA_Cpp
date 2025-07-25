#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
  priority_queue<int,vector<int>,greater<int> > pq;
  int arr[]={10,9,8,7,4,70,60,50};
  int n=sizeof(arr)/sizeof(arr[0]);
  int k=4;
  for(int i=0;i<=k && i<n;i++){
    pq.push(arr[i]);
  }
  int indx=0;
  for(int i=k+1;i<n;i++){
    arr[indx++]=pq.top();
    pq.pop();
    pq.push(arr[i]);
  }
  while(!pq.empty()){
    arr[indx++]=pq.top();
    pq.pop();
  }

  cout<<"sorted array: ";
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}