#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==1) return a;;
    int pow=a*power(a,b-1);
    return pow;
}
int main(){
    int m,n;
    cout<<"Enter m and n:";
    cin>>m;
    cin>>n;
   cout<<power(m,n)<<" ";

}