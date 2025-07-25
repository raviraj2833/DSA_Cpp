#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
//    string str[]={"0123","0023","456","00182","940","2901"};
//    long long  max=stoll(str[0]);
//    for(int i=1;i<=5;i++){
//        long long x=stoll(str[i]);
//        if(x>max){
//         max=x;
//        }
//    }
//    cout<<max<<" ";
     int n;
     cin>>n;
     vector<string>s(n);
     for(int i=0;i<n;i++){
        cin>>s[i];
     }
     long long max=stoll(s[0]);
     string maxS=s[0];
     for(int i=1;i<n;i++){
        long long x=stoll(s[i]);
        if(x>max){
             max=x;
             maxS=s[i];
        }
     }
     cout<<max<<" ";
     cout<<maxS<<" ";
}