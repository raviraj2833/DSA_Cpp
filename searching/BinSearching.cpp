#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n=sizeof(arr);
    int target=15;
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    while(low<=high){
        if(arr[mid]==target){
    
        }else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
}
