#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    stack<int> st1;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<endl;
    // print the stack by pop all the elements
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // print the stack not by popping the element
    while(st.size()>0){
        cout<<st.top()<<" ";
        st1.push(st.top());
        st.pop();
    }
    cout<<endl;
    // print the reverse order
    while(st1.size()>0){
        st.push(st1.top());
        st1.pop();
        cout<<st.top()<<" ";
    }

    // 
    // while(st1.size()>0){
    //     cout<<st1.top()<<" ";
    //     st1.pop();
    // }
}