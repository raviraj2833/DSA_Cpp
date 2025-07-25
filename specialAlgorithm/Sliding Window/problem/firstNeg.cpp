#include<iostream>
using namespace std;
void firstNeg(int arr[],int n,int k){
    int ans[n-k+1];
    int idx=0;
    // 2 -3 4 4 -7 -1 4 -2 6
    // starting with k=4
    for(int i=0;i<n-k+1;i++){
        bool found=false;
        for(int j=i;j<i+k;j++){
            if(arr[j]<0){
                ans[idx++]=arr[j];
                found = true;
                break;
            }
           
        }
    }
    for(int i=0;i<n-k+1;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl<<" ";
}
void firstNeg2(int arr[],int n,int k){
    int ans[n-k+1];
    int p=-1;         // 0  1 2 3  4  5 6  7 8 
    for(int i=0;i<k;i++){ // 2,-3,4,4,-7,-1,4,-2,6
        if(arr[i]<0){
            p=i; // 1
            break;
        }
    }
    if(p==-1) ans[0]=1;
    else ans[0]=arr[p];
    int i=1,j=k;
    while(j<n){
        if(p>=i) ans[i]=arr[p];
        else{
            for(int p=i;p<=j;p++){
                if(arr[p]<0){
                     ans[i]=arr[p];
                     break;
                }
            }
        }
        i++;
        j++;
    }
    for(int i=0;i<n-k+1;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl<<" ";
}
int main(){
    int arr[]={2,-3,4,4,-7,-1,4,-2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    // firstNeg(arr,n,4);
    firstNeg2(arr,n,5);

}