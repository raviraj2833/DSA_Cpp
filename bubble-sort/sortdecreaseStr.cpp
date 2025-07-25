#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "AZYZXBDJKX";
    string str;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'X')
        {
            str.push_back(s[i]);
        }
    }
    // bubble sort
    int n = str.length();
    for (int i = 0; i < n - 1; i++)  // Loop for each pass
    {
        bool flag = false;  // To optimize and stop early if sorted
        for (int j = 0; j < n - 1 - i; j++)  // Inner loop for comparisons
        {
            if (str[j] > str[j + 1])  // Swap if the current element is greater than the next
            {
                swap(str[j], str[j + 1]);
                flag = true;
            }
        }
        if (flag==false)  // If no swaps were made, the string is sorted
        {
            break;
        }
    }
    cout<<endl;
     cout<<str<<" ";
    return 0;
}