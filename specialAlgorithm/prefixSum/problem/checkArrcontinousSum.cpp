#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    // formation of prefix sum
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    int idx=-1;
    // check any x exist
    for(int i=1;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            idx=i;
            break;
        }
    }
    if(idx!=-1) cout<<"yes it can be partitioned after index : " <<idx<<" ";
    else cout<<"Not it can't be partitioned";
}