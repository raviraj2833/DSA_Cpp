#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int n,int i){
    if(i==n) return;
    cout<<arr[i]<<" ";
    print(arr,n,i+1);
   
}
void print2(vector<int>&v,int i){
    if(i==v.size()) return;
    cout<<v[i]<<" ";
    print2(v,i+1);
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<v.size();i++){
        v[i]=arr[i];
    }
    // print(arr,n,0);
    print2(v,0);
    
}