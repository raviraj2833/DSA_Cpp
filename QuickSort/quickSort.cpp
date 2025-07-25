#include<iostream>
#include<vector>
using namespace std;
// worst case -O(n^2)
int partition(vector<int>&v,int si,int ei){
    int pivot=v[si];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        // if(i==(si+ei)/2) continue;
        if(v[i]<pivot)  count++;
    }
    int pivotIdx=count+si;
    swap(v[si],v[pivotIdx]);
    int i=si;
    int j=ei;
    while(i<pivotIdx && j>pivotIdx){
        if(v[i]<pivot) i++;
        if(v[j]>pivot) j--;
        else if(v[i]>pivot && v[j]<=pivot){ 
            swap(v[i],v[j]);
             i++;
             j--;
        }
    }
    return pivotIdx;
}
void QuickSort(vector<int>&v,int si,int ei){
    if(si>=ei) return;
    int pi=partition(v,si,ei);
    QuickSort(v,si,pi-1);
    QuickSort(v,pi+1,ei);
}
int main(){
    int arr[]={5,1,8,2,78,6,3,42};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr,arr+n);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    QuickSort(a,0,n-1);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}