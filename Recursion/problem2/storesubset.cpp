#include<iostream>
#include<string>
#include<vector>
using namespace std;
// void printSubset(string ans,string str,int idx){
//     if(idx==str.length()){
//         cout<<ans<<" "<<endl;
//         return;
//     }
//     char ch=str[idx];
//     printSubset(ans+ch,str,idx+1);
//     printSubset(ans,str,idx+1);
// }
void storeSubset(string ans,string str,vector<string>&v){
    if(str.size()==0){
        v.push_back(ans);
        return;
    }
    char ch=str[0];
    storeSubset(ans,str.substr(1),v);
    storeSubset(ans+ch,str.substr(1),v);
}
int main(){
    string str="abc";
    string sub="";
    vector<string>v;
    storeSubset("",str,v);
    for(string ele : v){
        cout<<ele<<" "<<endl;
    }
}