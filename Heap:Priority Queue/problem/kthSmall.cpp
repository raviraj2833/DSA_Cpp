#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
  priority_queue<int,vector<int>,greater<int> > pq;
  int arr[]={10,9,8,0,-1,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++){
    pq.push(arr[i]);
  }
  int k;
  cout<<"Enter the kth value: "<<endl;
  cin>>k;
  for(int i=1;i<k;i++){
    pq.pop();
  }
  cout<<"The kth smallest element is : ";
  cout<<pq.top()<<" ";


  
}