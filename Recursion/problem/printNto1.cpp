#include<iostream>
using namespace std;
void nTo1(int n){
  if(n==0) return;
  cout<<n<<endl;
  nTo1(n-1); // before recursive call (5,4,3,2,1)
}
int main(){
    int m;
    cout<<"Enter m:";
    cin>>m;
    nTo1(m);
}