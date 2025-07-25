#include<iostream>
#include<unordered_set>
using namespace std;
void display(unordered_set<int> & s){
  for(int st:s){
    cout<<st<<" ";
  }
}
int main(){
  unordered_set<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(4);
  s.insert(4);
  s.insert(4);
  s.insert(4);
  s.insert(4);
  s.insert(4); // sets does not contain duplicate element
  s.erase(4);

 int target=2;
 // s.find() -->it searches in the set , and if it is not found then it return  its last element
 if(s.find(target)!=s.end()){ // target exits
  cout<<"Exist"<<endl;
 }else{
  cout<<"Doesn't exist"<<endl;
 }

  // cout<<s.size()<<endl;
  display(s);


}