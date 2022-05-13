#include <iostream>
using namespace std;

int main()
{

	int m, n;
	cin >> m >> n; // here lets say m = 4 and n = 2
	int a[m][n];

	for (int i = 0; i < m; i++) // Taking input from the user row wise
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++) // taking input row wise with col wise index
	{
		int sum = 0;
		for (int j = 0; j < m; j++) 
		{
			sum = sum + a[j][i];
		}
		cout << sum << " ";
	}
}
