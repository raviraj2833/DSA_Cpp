#include<iostream>
#include<string>
using namespace std;
int main(){
    int vowCount=0;
    string str;
    getline(cin,str);
    cout<<str<<" ";
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i' || str[i]== 'o' || str[i]=='u'){
            vowCount++;
        }
        i++;
    }
    cout<<endl;
    cout<<vowCount<<" ";
}