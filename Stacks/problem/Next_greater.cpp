#include<iostream>
#include<stack>
using namespace std;
// void Nextgreater(int arr[]){
    
// }
int main(){
    int arr[]={3,1,2,5,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int arr1[n];
    // stack<int> str;
    for(int i=0;i<n;i++){
        arr1[i]=-1;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                 arr1[i]=arr[j];
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }

}