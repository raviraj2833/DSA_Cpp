#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<str<<" ";
    int len=str.size();
    cout<<endl;
    cout<<str.substr(1,len);
}