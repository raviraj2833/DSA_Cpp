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
    
    int m=v.size();
    int k=21;
    k=k%m;
    // reverse approach
    reverseBypart(0,m-k-1,v);
    reverseBypart(m-k,m-1,v);
    reverseBypart(0,m-1,v);
   display(v);

}