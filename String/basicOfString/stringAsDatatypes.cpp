#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    // cin>>str; // only if the given string has no space
    getline(cin,s); // with spaces 
    cout<<s;
    cout<<endl;
    s[0]='r';
    cout<<s;
}