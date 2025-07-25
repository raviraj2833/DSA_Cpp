#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the rows and columns:";
    cin>>m;
    cin>>n;
    int arr[m][n];
    cout<<"Enter the data of students:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
             cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 
    cout<<endl;
    // printing the transpose matrix
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
