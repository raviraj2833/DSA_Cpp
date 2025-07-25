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
    // printing the  above matrix in spiral form
    int minr=0;
    int minc=0;
    int maxr=m-1;
    int maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        // right--> minr is fixed
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;

        // down --> maxc is fixed
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;

        // left -->> maxr is fixed
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;

        // up --> minc is fixed
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
}
