#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    int x=12;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            cout<<arr[i-1]<<" ";
            break;
        }
    }
}