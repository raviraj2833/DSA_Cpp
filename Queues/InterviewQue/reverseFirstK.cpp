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
        if(f-b==0){
            cout<<"Queue is underflow";
            return;
        }
        int x=arr[f];
        f++;
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
    void reverseFirstK(int k){
        if(Size==0) return;
        int s=0,end=k-1;
        while(s<end){
            int temp=arr[s];
            arr[s]=arr[end];
            arr[end]=temp;
            s++;
            end--;
        }
     }
};
int main()
{
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.display();
    q.reverseFirstK(2);
    cout<<endl;
    q.display();
    
}