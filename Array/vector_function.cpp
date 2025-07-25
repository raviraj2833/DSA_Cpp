#include <iostream>
#include <vector>
using namespace std;
void change(vector<int> &a)
{ //-->> here ampercent is used for function to use the vector v and change the value of index;
    a[0] = 100;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    change(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}