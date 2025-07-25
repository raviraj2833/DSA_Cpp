#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<str<<" ";
    int len=str.size();
    int i=0,j=len-1;
    while(i<=j){
        if(str[i]!=str[j]) cout<<"No";
        i++;
        j--;
    }
    cout<<endl;
}