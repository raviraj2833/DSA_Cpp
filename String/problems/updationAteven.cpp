#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<str<<" ";
    int i=0;
    while(str[i]!='\0'){
        if(i%2==0){
            str[i]='a';
        }
        i++;
    }
    cout<<endl;
    cout<<str;
}