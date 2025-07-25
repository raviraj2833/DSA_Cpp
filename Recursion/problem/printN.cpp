#include <iostream>
using namespace std;
void nTo1(int i,int x)
{
    // base case
    if (i>x)
        return;
    cout<<i<<endl;
    nTo1(i+1,x);
}
int main()
{
    int m;
    cout << "Enter m:";
    cin >> m;
    nTo1(1,m);
}