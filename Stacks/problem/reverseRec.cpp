#include<iostream>
#include<stack>
using namespace std;
void reverse(stack<int>&st){
    if(st.size()==0) return;
    int n=st.size();
    int arr[n];
    while(st.size()>0){
        for(int i=0;i<n;i++){
            arr[i]=st.top();
            st.pop();
        }
    }
    for(int i=0;i<n;i++){
        st.push(arr[i]);
    }
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<endl;
    reverse(st);

    
}