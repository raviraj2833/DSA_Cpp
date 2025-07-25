#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>& st, int element) {
    if (st.empty()) {
        st.push(element);
    } else {
        int top = st.top(); // Remove the top element
        st.pop();
        insertAtBottom(st, element); // Recursive call
        st.push(top); // Put the top element back
    }
}

void reverseStack(stack<int>& st) {
    if (!st.empty()) {
        int top = st.top(); // Remove the top element
        st.pop();
        reverseStack(st); // Recursive call to reverse the rest
        insertAtBottom(st, top); // Insert the removed element at the bottom
    }
}

int main(){
    queue<int> q;
    stack<int> st;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    int half=q.size()/2;
    for(int i=0;i<half;i++){
        st.push(q.front());
        q.pop();
    }
    reverseStack(st); // 1 2 3 4
    while(!st.empty()){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

   
    
}