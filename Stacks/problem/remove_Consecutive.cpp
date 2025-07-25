#include<iostream>
#include<stack>
using namespace std;
string removeDuplicate(string s){
    stack<char> str;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(str.empty() || s[i]!=str.top()){
            str.push(s[i]);
        }
    }
    string result=" ";
    while(! str.empty()){
        result=str.top() + result;
        str.pop();
    }
    return result;
    
}
int main(){
    string s="aaabbcddaabffg";
    cout<<removeDuplicate(s)<<" ";
}