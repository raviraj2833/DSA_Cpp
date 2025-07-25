#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter the string:";
    string str;
    getline(cin,str);
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
    }
    sort(v.begin(),v.end());
    cout<<endl;
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
    }
    cout<<endl;
    int maxcount=1;
    int count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxcount=max(maxcount,count);
    }
    // to find the word whose occuring most among the words>>>>
    count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxcount){
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }
}