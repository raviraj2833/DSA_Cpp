#include <iostream>
#include <stack>
using namespace std;
int solve(int val1, int val2, char ch)
{
    if (ch == '+')
        return val1 + val2;
    else if (ch == '-')
        return val1 - val2;
    else if (ch == '*')
        return val1 * val2;
    else
        return val1 / val2;
}
// checking priority
int pr(char ch)
{
    if (ch == '+' or ch=='-')
        return 1;
    else if(ch=='*' or ch=='/')
        return 2;
    else 
    return 0;    
}
int main()
{
    // int x=(2+6)*4/8-3;
    string str = "(2+6)*4/8-3";
    stack<int> val;
    stack<char> op;
    for (int i = 0; i < str.length(); i++)
    {
        // check if str[i] is a digit (0-9)
        if (str[i] >= 48 && str[i] <= 57)
        {
            val.push(str[i] - 48);
        }
        else
        {
            if (op.size() == 0 || pr(str[i]) > pr(op.top()))
            {
                op.push(str[i]);
            }
            else if(op.size()==0 || str[i]=='(') op.push(str[i]);
            else if(op.size()==0 || op.top()=='(') op.push(str[i]);
            else if(str[i]==')'){
                while (!op.empty() && op.top() != '('){
                    char ch=op.top();
                    op.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans=solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop(); // opening bracket remove after evaluation
            }
            else
            { 
                while (op.size() && pr(op.top()) >= pr(str[i]))
                {
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(str[i]);
            }
        }
    }
    // the operator stack can have values
    // so make it empty
    while (op.size() > 0)
    {
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }
    cout << val.top() << " ";
}
