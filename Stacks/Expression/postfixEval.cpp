#include <iostream>
#include <stack>
using namespace std;
int solve(int val1,int val2,char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main()
{
    string str = "79+4*8/3-";
    stack<int> st;
    for (int i = 0; i < str.length(); i++)
    {
        // check if str[i] is a digit (0-9)
        if (str[i] >= 48 && str[i] <= 57)
        {
            st.push((str[i] - 48));
        }
        else
        {
            int val2=st.top();
            st.pop();
            int val1=st.top();
            st.pop();
            int ans=solve(val1,val2,str[i]);
            st.push(ans);
        
        }
    }
    cout << st.top() << " ";
    cout<<endl;
    cout<<(7+9)*4/8-3<<" ";
} 
