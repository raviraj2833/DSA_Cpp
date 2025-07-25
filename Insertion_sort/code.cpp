#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 3, 2, 4, 1};
    int n = 5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // Insertion sorting
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}