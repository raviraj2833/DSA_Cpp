#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the rows and columns:";
    cin>>m;
    cin>>n;
    int arr[m][n];
    int sum=0;
    cout<<"Enter the data of students:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
             cin>>arr[i][j];
        }
    } 
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
             sum+=arr[i][j];
        }
    } 
    cout<<"Sum= "<<sum<<" ";
    return 0;
}