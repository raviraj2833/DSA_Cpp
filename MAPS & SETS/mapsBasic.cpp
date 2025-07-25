#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
  // pair<string,char> p;
  // p.first="Ravi";
  // p.second='A';
  // cout<<p.first<<" "<<endl<<p.second;
  pair<string,int> p1;
  p1.first="Ravi";
  p1.second=100;
  unordered_map<string,int> m; // string is key and int is value

  // insert the hashMap
  m.insert(p1);

  m["raj"]=90;
  m["rahul"]=91;
  m["sachin"]=1000;
  m["sachin"]=1000;
  // m.erase("raj");
  // m.erase("sachin");
  // m.erase("rahul");
  // m.erase("Ravi");
 


  // print the Map
  for(auto p:m){
    cout<<p.first<<" "<<p.second<<" "<<endl;
  }
  cout<<m.size()<<" ";
  


}