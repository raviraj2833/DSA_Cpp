#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the rows and columns:";
    cin>>m;
    cin>>n;
    int arr[m][n];
    int max=-1;
   
    cout<<"Enter the data of students:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
             cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
              if(arr[i][j]>max){
                max=arr[i][j];
              }
        }
    } 
    cout<<"Largest element: "<<max<<" ";
    return 0;
}
