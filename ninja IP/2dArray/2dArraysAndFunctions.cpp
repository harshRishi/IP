#include <iostream>
using namespace std;

void print2DArray(int a[][100], int m, int n) // Important to give the value of c i.e col in 2d Arrays
{
    for (int i = 0; i < m; i++)
    {
        for(int k = i; k < n; k++){
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }

    }
}

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

	print2DArray(a, m, n);

	/*
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
*/
}