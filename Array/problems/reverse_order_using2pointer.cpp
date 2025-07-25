#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void reverseBypart(int i,int j,vector<int>&v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++){
    int q;
    cin>>q;
    v.push_back(q);
    }
    display(v);
    cout<<endl;
    
//    int i=0,j=v.size()-1;
//    while(i!=j){
//     // swap
//     int temp=v[i];
//     v[i]=v[j];
//     v[j]=temp;
//     i++;
//     j--;
//    }
//    reverseBypart(0,2,v);
   display(v);

}