#include<iostream>
#include<vector>
using namespace std;
vector<int> mergeSort(vector<int>&v1 , vector<int>&v2){
    int n=v1.size();
    int m=v2.size();
    vector<int>res(m+n);
    int i=0;
    int j=0;
    int k=0;
    while(i<=n-1 && j<=m-1){
        if(v1[i]<v2[j]){
            res[k]=v1[i];
            i++;
        }
        else
        {
           res[k]=v2[j];
            j++;
        }
        k++;
    }
    if(i==n){ // arr1 ka sara element uthha chuka hoo
     while(j<=m-1){
        res[k]=v2[j];
        k++;
        j++;
     }
     if(j==m){// arr2 ka sara elements uthha chuka hoo
       while(i<=n-1){
        res[k]=v1[i];
        i++;
        k++;
       }
     }
    }
    return res;
}
int main(){
//    int arr1[4]={1,3,5,7};
   vector<int> arr1;
   arr1.push_back(1);
   arr1.push_back(3);
   arr1.push_back(5);
   arr1.push_back(7);
   for(int i=0;i<arr1.size();i++){
    cout<<arr1[i]<<" ";
   }
   cout<<endl;
  
//    int arr2[6]={2,4,6,8,9,10};
   vector<int> arr2;
   arr2.push_back(2);
   arr2.push_back(4);
   arr2.push_back(6);
   arr2.push_back(8);
   arr2.push_back(10);
   for(int i=0;i<arr2.size();i++){
    cout<<arr2[i]<<" ";
   }
   cout<<endl;
   vector<int> v=mergeSort(arr1,arr2);
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
}