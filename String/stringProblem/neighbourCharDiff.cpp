#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<str<<" ";
    int len=str.size();
    int i=-1;
    int count=0;
    while(i!=len){
        if(len==1) break;
        if(len==2 && str[0]!=str[1]) count++;
        if(str[i]!=str[i-1] && str[i]!=str[i+1]){
            count++;
        }
        i++;
    }
    cout<<endl;
    cout<<count<<" ";
}