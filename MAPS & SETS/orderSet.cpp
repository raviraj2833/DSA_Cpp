#include<iostream>
#include<set>
using namespace std;
int main(){
  set<int> st;
  st.insert(2);
  st.insert(9);
  st.insert(4);
  st.insert(1);
  for(int x:st){
    cout<<x<<" ";
  }
}