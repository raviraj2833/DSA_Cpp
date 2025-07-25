#include<iostream>
#include<vector>
using namespace std;
int inversion(vector<int>&a,vector<int>&b){
   int count=0;
   int i=0;
   int j=0;
   while(i<a.size() && j<b.size()){
      if(a[i]>b[j]){
          count+=(a.size()-i);
          j++;
       }else{
        i++;
       }
    }
    return count;
}
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
int mergeSort(vector<int>&v){
    int count=0;
    int n=v.size();
    if(n==1) return 0;
    int n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    // recursion 
    count+=mergeSort(a);
    count+= mergeSort(b);

    count+=inversion(a,b);
    //call the merge function
    merge(a,b,v);
    a.clear();
    b.clear(); 
    return count;
}
int main(){
    int arr[]={5,1,8,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr,arr+n);
    // brute force
    // for(int i=0;i<a.size()-1;i++){
    //     for(int j=i+1;j<a.size();j++){
    //         if(a[i]>a[j] && i<j){
    //             count++;
    //         }
    //     }
    // }
    // cout<<count<<" "; 

    // divide conquer
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<mergeSort(a)<<" ";
}