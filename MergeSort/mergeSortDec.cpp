#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&nums){
    int i=0;
    int j=0;
    int k=0;
    // condition
    while(i<=a.size()-1 && j<=b.size()-1){
        if(a[i]<=b[j]){
            nums[k++]=b[j++];
        }
        else{
            nums[k++]=a[i++];
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
void mergeSort(vector<int>&v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    // recursion 
    mergeSort(a);
    mergeSort(b);

    //call the merge function
    merge(a,b,v);
    a.clear();
    b.clear();

    
    
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>nums(arr,arr+n);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    mergeSort(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }



   
}