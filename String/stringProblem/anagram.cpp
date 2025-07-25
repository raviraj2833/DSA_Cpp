#include<iostream>
#include<string>
using namespace std;
bool checkAnagram(string &s,string &t){
    sort(s.begin(),s.end());
    cout<<endl;
    sort(t.begin(),t.end());
    if(s==t) {
    return true;
    }
    else{
        return false;
    }
}
int main(){
    cout<<"Enter the string :";
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    cout<<(checkAnagram(s,t)? "YES" :"NO");
}