#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<str<<" ";
    int len=str.size();
    cout<<len;

    // reverse the first half
    reverse(str.begin(),str.end()-len/2);
    cout<<endl;
    cout<<str;
}