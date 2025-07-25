#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="123456";
    int x=stoi(str); // string to integer
    cout<<x+123456<<" "; // output--> 246912
    
    cout<<endl;
    // stoll
    string s="1234567891231214124";
    long long len=s.size();
    long long ll=stoll(s);
    cout<<ll<<" "<<endl;
    cout<<len<<" ";
}