#include<iostream>
#include<string>
using namespace std;
int main(){ // without recursion
    string str="Ravi raj";
    string s="";
    for(int i=0;i<str.length();i++){
        if(str[i]!='a') s.push_back(str[i]);
    }
    cout<<s<<" ";
}