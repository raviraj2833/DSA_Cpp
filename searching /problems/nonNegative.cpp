#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0,1,2,4,5,8,9,12};
    int n = sizeof(arr) / sizeof(arr[0]);
    // TC-O(n);
    // for(int i=0;i<n;i++){
    //     if(i!=arr[i]){
    //         cout<<i<<" ";
    //         break;
    //     }
    // }
    int lo=0;
    int hi=n-1;
    while(lo<hi){
        int mid=lo+(hi-lo)/2;
        if(mid!=arr[mid]){
            cout<<mid<<" ";
            break;
        }
        else if(mid==arr[mid]){
            lo=mid+1;
        }
    }
}
