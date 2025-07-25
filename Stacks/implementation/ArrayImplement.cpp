#include<iostream>
using namespace std;
class Stack{
public:    // access member
    int arr[5];
    int n;
    int idx;
    Stack(){ //  constructor
         idx=-1;
         n=sizeof(arr)/sizeof(arr[0]);
    }
    void push(int val){
        if(idx==n){
            cout<<"Stack is full";
            return;
        } 
        idx++;
        arr[idx]=val;
    }
    void pop(){
        if(idx==-1){
            cout<<"Stack is empty";
            return;
        }
        idx--;
    }
    int top(){
         if(idx==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[idx];
    }
    void display(){
        while(idx!=-1){
            cout<<arr[idx]<<" ";
            idx--;
        }
    }
    int size(){
        return idx+1;
    }
 };
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.top()<<" "<<endl;
    cout<<st.size()<<" "<<endl;

    // st.display();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.top()<<" "<<endl;
    st.display();

}