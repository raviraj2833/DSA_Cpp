#include<iostream>
#include<map>
using namespace std;
int main(){
  map<string ,int> mp;
  mp["Ravi"]=10;
  mp["Akash"]=20;
  mp["Vivek"]=30;
  mp["Suresh"]=40;
  for(auto x:mp){
    cout<<x.first<<" "<<x.second<<" "<<endl; //ordered by key value
  }



}