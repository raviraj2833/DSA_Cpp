#include<iostream>
#include<stack>
using namespace std;
void pushAtbottom(stack<int>&st,int val){
    int n=st.size();
    vector<int> arr(n); // 
    while(st.size()>0){
        for(int i=0;i<n;i++){
            arr[i]=st.top();
            st.pop();
        }
    }
    st.push(val);
    for(int i=n-1;i>=0;i--){
        st.push(arr[i]);
    }
}
void displayRec(stack<int>&st){
    if(st.size()==0) return;
    cout<<st.top()<<" ";
    int x=st.top();
    st.pop();
    displayRec(st);
    st.push(x);
}
void pushAtbottomRec(stack<int>&st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushAtbottomRec(st,val);
    st.push(x);

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

   pushAtbottomRec(st,100);
   cout<<endl;
   displayRec(st);
  

    
}