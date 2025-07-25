#include<iostream>
using namespace std;
int power(int x,int n){
    if(n==1) return x;
    int ans=power(x,n/2);
    if(n%2==0){
       return ans*ans;
    }
    else{
         return x*ans*ans;
    }
}
int main(){
    int m,a;
    cout<<"Enter m and n:";
    cin>>m;
    cin>>a;
   cout<<power(m,a)<<" ";

}