#include<iostream>
using namespace std;
int main(){
    int m,n,p,q;
    cout<<"Enter the rows and columns of both matrics:";
    cin>>m;
    cin>>n;
    cin>>p;
    cin>>q;
    int arr[m][n],arr1[p][q];
    if(m==p || n==q){
    cout<<"Enter the data of students:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
             cin>>arr[i][j];
        }
    } 
    cout<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
             cin>>arr1[i][j];
        }
    } 
    // adding two matrix --> arr[i][j] add another matrix arr1[i][j] in itself.....
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]+=+arr1[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
    }
    else{
        return -1;
    }
    return 0;
}