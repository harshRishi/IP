#include <iostream>
using namespace std;

int main()
{
    int a[100][100];
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++) // Taking input from the user
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Row Wise: " << endl;
    for (int i = 0; i < m; i++) // printing the array row wise
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Col wise: " << endl;
    for (int i = 0; i < n; i++) // printing the array row wisecls
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}