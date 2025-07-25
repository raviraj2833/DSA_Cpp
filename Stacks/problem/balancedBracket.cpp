#include<iostream>
#include<vector>
using namespace std;
class Stack{
public:    // access member
    vector<string> str;
    int idx;
    Stack(){ //  constructor
         idx=-1;
    }
    void push(string s){
        if(idx==str.size()){
            cout<<"Stack is full";
            return;
        } 
        idx++;
        str.push_back(s);
    }
    void pop(){
        if(idx==-1){
            cout<<"Stack is empty";
            return;
        }
        idx--;
    }
    string top(){
        if(idx==-1){
            cout<<"Stack is empty";
            return "";
        }
        return str[idx];

    }
    void display() {
        for (int i = idx; i >= 0; i--) {
            cout << str[i] << " ";
        }
        cout << endl;
    }
 };
int main(){
    Stack st;
    string str="((()))";
    for(int i=0;i<str.length();i++){
        if(str[i]=='('){
            st.push(string(1,str[i]));
        }else if(str[i]==')'){
            if(st.top()=="("){
                st.pop();
            }
        }
    }
}