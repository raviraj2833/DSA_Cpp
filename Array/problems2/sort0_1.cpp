#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void sort(vector<int>&v){
    int i=0,j=v.size()-1;
    while(i<=j){
        if(v[i]<v[j]){
            i++;
            j--;
        }else{
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
}
// two pointer approach
void sortP(vector<int>&v){
    int n=v.size();
    int a=0;
    int b=n-1;
    while(a<b){
        if(v[a]==0) a++; 
        if(v[b]==1) b--;
        else if(v[a]==1 && v[b]==0){
           int temp=v[a];
           v[a]=v[b];
           v[b]=temp;
            a++;
            b--;
        }
    }
}
void sortPosNeg(vector<int>&v){
    int n=v.size();
    int a=0;
    int b=n-1;
    while(a<b){
        if(v[a]<0) a++; 
        if(v[b]>0) b--;
        else if(v[a]>0 && v[b]<0){
           int temp=v[a];
           v[a]=v[b];
           v[b]=temp;
            a++;
            b--;
        }
    }
}

void sort01(vector<int>&v){
    int n=v.size();
    int noO=0;
    int noZ=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noZ++;
        else noO++;
    }
    // filling the 0 and 1 in a sorted way
    for(int i=0;i<n;i++){
        if(i<noZ) v[i]=0;
        else v[i]=1;
    }
}
void sort012(vector<int>&v){
    int n=v.size();
    int no0=0;
    int no1=0;
    int no2=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) no0++;
        else if(v[i]==1) no1++;
        else no2++;
    }

    // filling 0,1,2 in sorted way
    for(int i=0;i<n;i++){
        if(i<no0) v[i]=0;
        else if(i<no0 + no1) v[i]=1;
        else v[i]=2;
    }
}
// move negative number to beg and pos to end
void sortNegPos(vector<int>&v){
    int countNeg=0;
    for(int i=0;i<v.size();i++){
        if(v[i]<0){ countNeg++;
        }
    }
    vector<int> sorted(v.size());
    int negIndx=0;
    int posIndx=countNeg;
    for(int i=0;i<v.size();i++){
        if(v[i]<0) 
        {
        sorted[negIndx++]=v[i];
        }
        else{
        sorted[posIndx++]=v[i];
        }
    }
    v=sorted;
}
// 3pointer
void sorted(vector<int>&v){
    int n=v.size();
    int mid=0;
    int low=0;
    int high=n-1;
    while(mid<=high){
        // [high+1]==2;
        if(v[mid]==2){
            int temp=v[mid];
            v[mid]=v[high];
            v[high]=temp;
            high--;
        }
        // [low-1]==0
        if(v[mid==0]){
            int temp=v[mid];
            v[mid]=v[low];
            v[low]=temp;
            low++;
            mid++;
        }
        if(v[mid]==1){
            mid++;
        }
    }
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++){
    int q;
    cin>>q;
    v.push_back(q);
    }
    display(v);
    cout<<endl;
    // sort01(v); // it works for all test cases
    // sortPosNeg(v);
    sorted(v);
   display(v);
}