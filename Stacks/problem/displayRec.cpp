#include<iostream>
#include<stack>
using namespace std;
// recursive call to display normal as push in stack
void displayRec(stack<int>&st){
    if(st.size()==0) return;
    // cout<<st.top()<<" ";
    // while(st.size()>0){
    //     st.pop();
    //     displayRec(st);
    // }
    cout<<st.top()<<" ";
    int x=st.top();
    st.pop();
    displayRec(st);
    st.push(x);
}
// recursive call to display reverse order of stack elements
void displayRecRev(stack<int>&st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    displayRecRev(st);
    cout<<x<<" ";
    st.push(x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<endl;
    displayRecRev(st);


    
}