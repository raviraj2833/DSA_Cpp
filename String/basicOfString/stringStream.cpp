#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    string s="ravi is a good boy";
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
    
}