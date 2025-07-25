#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void firstNeg(int arr[],int n,int k){
    queue<int> q;
    vector<int> ans;
    for(int i=0;i<n;i++){ // store the negative index
        if(arr[i]<0){
            q.push(i);
        }
    }
    for(int i=0;i<n-k+1;i++){// n-k+1=10-3=7+1=8
       while(q.size() && q.front()<i) q.pop();
       if(q.front()>=i+k) ans.push_back(0);
       else ans.push_back(arr[q.front()]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int arr[]={0,-1,-2,3,4,-5,6,4,7,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    firstNeg(arr,10,3);
}