#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the rows and columns:";
    cin>>n;
    cin>>n;
    int arr[n][n];
    cout<<"Enter the data of students:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 
    cout<<endl;
    // printing the transpose matrix
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
