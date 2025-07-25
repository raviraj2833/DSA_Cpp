#include <iostream>
using namespace std;
int sum(int n)
{
    // base case
    if (n==0)
        return 0;  
    return n+sum(n-1);  // return type 
}
int main()
{
    int m;
    cout << "Enter m:";
    cin >> m;
    cout<<"sum: "<<sum(m)<<" ";
}