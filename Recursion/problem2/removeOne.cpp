#include<iostream>
#include<vector>
using namespace std;
void removeOne(vector<int>&v,int arr[],int idx,int n){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        return;
    }
    if(arr[idx]!=1) v.push_back(arr[idx]);
    removeOne(v,arr,idx+1,n);
}
int main(){
    int arr[]={1,2,3,1,1,4,1,1,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    removeOne(v,arr,0,n);


}