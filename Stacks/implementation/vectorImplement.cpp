#include<iostream>
#include<vector>
using namespace std;
class Stack{
public:    // access member
    vector<int>v;
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        if(v.size()==0){
            cout<<"Stack is empty";
            return;
        }
        v.pop_back();
    }
    int top(){
         if(v.size()==0){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        return v[v.size()-1];
    }
    void display(){
        while(v.size()!=0){
            cout<<top()<<" ";
            v.pop_back();

        }
    }
    int size(){
        return v.size();
    }
 };
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    
    cout<<endl;
    st.pop();
    // st.display();
    cout<<endl;
    st.pop();    
    st.pop();
    cout<<st.top()<<" "<<endl;    

    // cout<<st.size()<<" ";

}