#include<iostream>
using namespace std;
int main(){
    // int arr[3][3]={{1,2,4},{4,5,6},{7,8,9}};
    int arr[3][3];
    // cout<<arr[0][0]<<endl;
    // cout<<arr[0][1]; // this is not a good way
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
             cin>>arr[i][j];
       
        }
    } 
    cout<<"2D-Array:";   
    cout<<endl;
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
             cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }
     // it is the way to print the first row:
    // for(int i=0;i<=2;i++){
    //     cout<<arr[0][i]<<" ";
    // }

}