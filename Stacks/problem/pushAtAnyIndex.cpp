#include<iostream>
#include<stack>
using namespace std;
void pushAtAnyindex(stack<int>&st,int idx,int val){
    int n=st.size();
    vector<int> arr(n); // 
    // pop all the element in vector
    for(int i=n-1;i>=0;i--){
        arr[i]=st.top();
        st.pop();
    }
    // insert val at specific index
    arr.insert(arr.begin()+idx,val);

    for(int i=0;i<=n;i++){
        st.push(arr[i]);
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout<<endl;
    pushAtAnyindex(st,5,90);
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
  

    
}