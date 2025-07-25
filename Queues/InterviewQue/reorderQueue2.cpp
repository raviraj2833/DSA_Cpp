#include<iostream>
#include<queue>
#include<stack>
using namespace std;
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
    while(!st.empty()){
        q.push(st.top());
        st.pop(); // 5 6 7 8 4 3 2 1
    }
    for(int i=0;i<half;i++){
        st.push(q.front());
        q.pop();
    } // 4 3 2 1 
    while(!st.empty()){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();  
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }


   
    
}