#include <iostream>
#include <vector>
using namespace std;
class CirQueue
{
public:
    int f;
    int b;
    vector<int> arr;
    int Size;
    CirQueue(int val){
        f=0;
        b=0;
        Size=0;
        vector<int> v(val);
        arr=v;
    }
    void push(int val){
        if(b==arr.size()){
            cout<<"Queue is overflow\n";
            return;
        }
        arr[b]=val;
        b++;
        Size++;
    }
    void pop(){
        if(Size==0){
            cout<<"Queue is underflow";
            return;
        }
        f++;
        Size--;
    }
    void display(){
        if(f==5){
            cout<<"Queue is empty";
            return;
        }
        for(int i=0;i<Size;i++){
            cout<<arr[(f+i)%5]<<" ";
        }
    }
    int front(){
        return arr[f];
    }
    int rear(){
        if(Size==0){
            cout<<"Queue is underflow";
            return -1;
        }
        return arr[b];
    }
    int size(){
       return Size;
    }
    bool empty(){
        if(Size==0) return true;
        else return false;
    }
    bool full(){
        if(Size==arr.size()) return true;
        return false; 
    }
};
int main()
{
    CirQueue cq(5);
    cq.push(10);
    cq.push(20);
    cq.push(30);
    cq.push(40);
    cq.push(50);
    cq.pop();
    cq.pop();
    cq.pop();
    cq.push(60);
    cq.display();

}