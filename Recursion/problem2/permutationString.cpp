#include<iostream>
#include<string>
#include<vector>
using namespace std;
void permutation(string ans,string str){
    if(str.length()==0){
       cout<<ans<<endl;
       return;
    } 
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        string left=str.substr(0,i);
        string right=str.substr(i+1);
        permutation(ans+ch,left+right);
    }
}

using namespace std;
int main(){
    string str="abc";
    string ans="";
    permutation("",str);
}