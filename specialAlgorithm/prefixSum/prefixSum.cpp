#include<iostream>
using namespace std;
int sumPrefIdx(int arr[],int n,int i,int j){
    int sum=0;
    for(int k=i;k<=j;k++){
       sum+=arr[k];
    }
    return sum;
}
int main(){
    int arr[]={9,1,8,6,5,2,4,3,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=1;i<n;i++){
    //     arr[i]+=arr[i-1];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<endl;
    cout<<sumPrefIdx(arr,n,3,7)<<" ";
    cout<<endl;
}