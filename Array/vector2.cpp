#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(4,6); // initial size=4 and each element is assign to 6
    cout<<"size is : "<<v.size()<<" "<<endl;
    cout<<"capacity is : "<<v.capacity()<<" "<<endl;
    cout<<v[2];
}