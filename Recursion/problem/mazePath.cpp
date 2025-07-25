#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    int totalways=rightways+downways;
    return totalways;
}
int maze2(int M,int N){
    if(M<1 || N<1) return 0;
    if(M==1 || N==1) return 1;
    int right=maze2(M,N-1);
    int down=maze2(M-1,N);
    return right+down;
}
void printPath2(int M,int N,string s){
    if(M<1 || N<1) return;
    if(M==1 || N==1){
        cout<<s<<endl;
        return;
    } 
    printPath2(M,N-1,s+'R');
    printPath2(M-1,N,s+'D');
}
void printPath(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    } 
    printPath(sr,sc+1,er,ec,s+'R');// right
    printPath(sr+1,sc,er,ec,s+'D');

}
int main(){
    // printPath(1,1,3,3,"");
    cout<<maze2(3,3)<<" "<<endl;
    printPath2(3,3,"");
   

}