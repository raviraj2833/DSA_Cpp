#include <iostream>
#include <vector>
using namespace std;
class Queue
{
public:
    int f;
    int b;
    vector<int> arr;
    int Size;
    Queue(int val){
        f=0;
        b=0;
        Size=0;
        vector<int> v(val);
        arr=v;
    }
    void pushback(int val){
        if(Size==arr.size()){
            cout<<"Queue is overflow\n";
            return;
        }
        arr[b]=val;
        b++;
        Size++;
    }
    void pushfront(int val){
        if(Size==arr.size()){
            cout<<"Queue is full";
            return;
        }
        f=(f-1+arr.size())%arr.size();
        arr[f]=val;
        Size++;
    }
    void popfront(){
        if(f-b==0){
            cout<<"Queue is underflow";
            return;
        }
        int x=arr[f];
        f++;
        Size--;
    }
    void popback(){
        if(Size==0){
            cout<<"Queue is underflow";
            return;
        }
        int x=arr[b];
        b--;
        Size--;
    }

    void display(){
        if(f==arr.size()){
            cout<<"Queue is empty";
            return;
        }
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
    }
    int front(){
        return arr[f];
    }
    int rear(){
        if(f-b==0){
            cout<<"Queue is underflow";
            return -1;
        }
        return arr[b];
    }
    int size(){
       return b-f;
    }
    bool empty(){
        if(b-f==0) return true;
        else return false;
    }
    bool full(){
        if(b==arr.size()) return true;
        return false; 
    }
};
int main()
{
    Queue q(5);

    q.pushback(10); // 10
    q.pushback(20); // 10 20
    q.pushback(30); // 10 20 30
    q.pushback(40); // 10 20 30 40
    q.pushback(50); // 10 20 30 40 50
    q.popfront(); // 20 30 40 50
    q.popback(); // 20 30 40
    q.pushfront(60);// 60 20 30 40
    // q.popback(); // 60 20 30
    // q.pushfront(70); // 70 60 20 30 
    q.popfront();
    q.pushback(90);
    q.pushback(100);
    q.popfront();
    q.pushfront(1);
    q.display();
}