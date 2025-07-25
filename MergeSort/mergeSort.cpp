#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&nums){
    int i=0;
    int j=0;
    int k=0;
    // condition
    while(i<=a.size()-1 && j<=b.size()-1){
        if(a[i]<b[j]){
            nums[k++]=a[i++];
        }
        else{
            nums[k++]=b[j++];
        }
    }
    // if index is out of bound in any vector
    if(i==a.size()){
        while(j<=b.size()-1){
            nums[k++]=b[j++];
        }
    }

    if(j==b.size()){
        while(i<=a.size()-1){
            nums[j++]=a[i++];
        }
    }
}
int main(){
    int v1[]={1,3,5,7};
    int n1=sizeof(v1)/sizeof(v1[0]);
    int v2[]={2,4,6,8,10,12};
    int m2=sizeof(v2)/sizeof(v2[0]);
    vector<int>arr(v1,v1+n1);
    vector<int>brr(v2,v2+m2);
    vector<int>res(n1+m2);
    merge(arr,brr,res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
   
}