#include<iostream>
using namespace std;
void MaxSum(int arr[],int n,int k){
    int ans[n-k+1];
    int maxSum=0;
    int maxidx=-1;
    for(int i=0;i<n-k+1;i++){
        int sum=0;
        for(int j=i;j<i+k;j++){
            sum+=arr[j];
        }
        if(maxSum<sum){
            maxSum=sum;
            maxidx=i;
        }
        ans[i]=sum; // 10 8 15 17 21 16 18
    }
    cout<<maxSum<<" "<<endl;
    for(int i=0;i<n-k+1;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    cout<<maxidx<<" ";
    
}
void TwoPointerSum(int arr[],int n,int k){
    int ans[n-k+1];
    int MaxSum=INT_MIN;
    int prevSum=0;
    for(int i=0;i<k;i++){
        prevSum+=arr[i]; // prevSum=15
    }
      MaxSum=prevSum;
      int maxidx=-1;
    // starting with k=4
        int i=1,j=k;
        ans[0]=MaxSum;
        while(j<n){
           prevSum=prevSum+arr[j]-arr[i-1];
           if(MaxSum<prevSum){
             MaxSum=prevSum;
             maxidx=i;
           }
           ans[i]=prevSum;
           i++;
           j++;
        }
    cout<<MaxSum<<" "<<endl;
    for(int i=0;i<n-k+1;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl<<" ";
    cout<<maxidx<<" ";
}
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    // MaxSum(arr,n,4);
    TwoPointerSum(arr,n,4);


}