#include <iostream>
#include <string>
#include <vector>
using namespace std;
void subSets(int arr[], int n, int idx, vector<int> ans, int k)
{
    if (idx == n)
    {
        if (ans.size() == k)
        {
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    if(ans.size()+(n-idx)<k) return;
    subSets(arr, n, idx + 1, ans, k);
    ans.push_back(arr[idx]);
    subSets(arr, n, idx + 1, ans, k);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;
    sort(v.begin(),v.end());
    subSets(arr, n, 0, v, 3);
}