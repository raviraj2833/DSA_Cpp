#include <iostream>
using namespace std;
int main()
{
    int m, n, p, q;
    cout << "Enter the rows and columns of both matrics:";
    cin >> m;
    cin >> n;
    cin >> p;
    cin >> q;
    int arr[m][n], arr1[p][q], mul[m][q];
    cout << "Enter the data of students:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> arr1[i][j];
        }
    }
    if (n == p)
    {
        // multiplication of two matrices
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                mul[i][j] = 0;
                for (int k = 0; k < p; k++)
                {
                    mul[i][j] += arr[i][k] * arr1[k][j];
                }
            }
        }
        cout << "Multiplication of 2D matrix:" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << mul[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        return -1;
    }
    return 0;
}