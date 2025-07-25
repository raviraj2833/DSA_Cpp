#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={100,80,60,81,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    stack<int> st;
    for(int i=0;i<=n;i++){
        // st.push(ans[n-1])=-1;
        while(!st.empty() && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.size()==0) ans[i]=i+1;
        else  ans[i]=i-st.top();
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}


