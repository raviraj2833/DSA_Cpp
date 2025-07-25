#include <iostream>
using namespace std;
void add(int sum,int n)
{
    // base case
    if(n==0){
        cout<<sum<<" ";
        return;
    }
    add(sum+n,n-1);
}
int main()
{
    int m;
    cout << "Enter m:";
    cin >> m;
    add(0,m);
}