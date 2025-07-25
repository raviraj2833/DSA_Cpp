#include <iostream>
#include <stack>
using namespace std;
int solve(int val1,int val2,char ch){
    if(ch=='+') return val2+val1;
    else if(ch=='-') return val2-val1;
    else if(ch=='*') return val2*val1;
    else return val2/val1;
}
int main()
{
    // string str = "-+2/*6483";
    string str="-/*+79483";
    stack<int> st;
    for (int i = str.length()-1; i>=0; i--) // reverse order
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
} 
