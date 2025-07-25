#include <iostream>
#include <stack>
using namespace std;
string append(string val1,string val2,char ch){
    string s="";
    s+=val2;
    s.push_back(ch);
    s+=val1;
    return s;
}
// checking priority
// int pr(char ch)
// {
//     if (ch == '+' or ch=='-')
//         return 1;
//     else if(ch=='*' or ch=='/')
//         return 2;
//     else 
//     return 0;    
// }
int main()
{
    // int x=(2+6)*4/8-3;
    string str = "-/*+79483";
    stack<string> val;
    for (int i = str.length()-1; i>=0; i--)
    {
        // check if str[i] is a digit (0-9)
        if (str[i] >= 48 && str[i] <= 57)
        {
            val.push(to_string(str[i] - 48));
        }
        else
        {
            string val2=val.top();
            val.pop();
            string val1=val.top();
            val.pop();
            string ans=append(val1,val2,str[i]);
            val.push(ans);
        }
    }
    cout << val.top() << " ";
} 
