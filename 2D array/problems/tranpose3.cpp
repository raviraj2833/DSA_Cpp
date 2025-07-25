#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the rows and columns:";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the data of students:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             cin>>arr[i][j];
        }
    }
    cout<<endl;
// the transpose matrix
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
    }
}
cout<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
// rotate by 90 degree
    for(int k=0;k<n;k++){
        int i=0;
        int j=n-1;
        while(i<=j){
            int temp=arr[k][i];
            arr[k][i]=arr[k][j];
            arr[k][j]=temp;
            i++;
            j--;
        }
    }
// printing the tranpose matrix
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
    
    return 0;
}
