#include <iostream>
using namespace std;
void nTo1(int n)
{
    // base case
    if (n==0)
        return;
    nTo1(n - 1); // after recursive call (1,2,3,4,5,..)
    cout << n << endl;
}
int main()
{
    int m;
    cout << "Enter m:";
    cin >> m;
    nTo1(m);
}