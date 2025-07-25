#include<iostream>
#include<vector>
using namespace std;
void printMax(int arr[],int n,int i,int max){
    if(i==n){ // base case
        cout<<max<<" ";
        return;
    } 
    if(max<arr[i]) max=arr[i];
    printMax(arr,n,i+1,max);
}
int printMax2(int arr[],int n,int i){
    if(i==n) return i;
   return max(arr[i],printMax2(arr,n,i+1));
}

int main(){
    int arr[]={2,3,1,40,16,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<printMax2(arr,n,0)<<" ";
    
}