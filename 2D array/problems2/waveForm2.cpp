#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the rows and columns:";
    cin >> m;
    cin >> n;
    int arr[m][n];
    cout << "Enter the data of students:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
    // printing the  above matrix in wave form Z when i==even reverse printing
      for(int i=0;i<m;i++){
        if(i%2!=0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
      }
}


