#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
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
    
    vector<int>v2(v.size());
    for(int i=0;i<v2.size();i++){
        //i+j=size-1;
        //j=size-1-i;
        int j=v.size()-1-i;
        v2[i]=v[j];
    }
    display(v2);
}