#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>strs(n);
    for(int i=0;i<strs.size();i++){
        cin>>strs[i];
    }
    // int len=strs.size();
    // cout<<len;
    // cout<<endl;
    // push_back
    // str.push_back('a');
    // str.push_back('b');
    // str.push_back('c');
    // str.push_back('d');
    // cout<<str<<" ";
    // cout<<endl;
    // // pop_back
    // str.pop_back();
    // cout<<str<<" ";
    // cout<<endl;
    // //" + " operator
    // string s="abc";
    // string y="def";
    // s="abx"+y;
    // cout<<s;
    // cout<<endl;
    // reverse the string
    // reverse(str.begin()+2,str.end()-1);
    // cout<<str;

    // sorting
    sort(strs.begin(),strs.end());
    for(int i=0;i<strs.size();i++){
       cout<<strs[i]<<" ";
    }
}