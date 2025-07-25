#include<iostream>
#include<stack>
using namespace std;
bool isBalance(string s){
    if(s.length()%2!=0) return false;
    stack<char> str;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            str.push(s[i]);
        }
        else if(s[i]==')'){
            if(str.size()==0) return false;
            else{
                str.pop();
            }
        }
    }
    if(str.size()==0) return true;
    return false;

}
int main(){
    string s="((()))";
    cout<<isBalance(s)<<" ";
    
    
}