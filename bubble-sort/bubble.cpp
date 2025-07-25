 #include<iostream>
 using namespace std;
 int main(){
    int arr[6]={5,1,4,6,2,3};
    int n=6;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    bool flag=true;
    // sorting 
    for(int i=0;i<n-1;i++){ // n-1 parse
       for(int j=0;j<n-1;j++){ // n-1 traverse
        if(arr[j]>arr[j+1]){
            // int temp=arr[j];
            // arr[j]=arr[j+1];
            // arr[j+1]=temp;
            swap(arr[j],arr[j+1]);
        }
       }
    }
    cout<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
 }