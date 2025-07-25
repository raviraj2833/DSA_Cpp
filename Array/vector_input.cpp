#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v; // initial size=4 and each element is assign to 6
    for(int i=0;i<4;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }
}