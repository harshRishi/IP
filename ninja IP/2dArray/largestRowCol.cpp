#include <iostream>
using namespace std;

void findLargest(int **input, int nRows, int mCols)
{
	if (nRows == 0 && mCols == 0)
	{
		cout << "row 0 -2147483648";
        return;
	}

	int maxCol = 0, maxRow = 0, rowIndex, colIndex;
	for (int i = 0; i < nRows; i++) // for rows
	{
		int sum = 0, j;
		for (j = 0; j < mCols; j++)
		{
			sum = sum + input[i][j];
		}
		if (sum > maxRow)
		{
			maxRow = sum;
			rowIndex = i;
		}
	}

	for (int i = 0; i < mCols; i++) // for column
	{
		int sum = 0, j;
		for (j = 0; j < nRows; j++)
		{
			sum = sum + input[j][i];
		}
		if (sum > maxCol)
		{
			maxCol = sum;
			colIndex = i;
		}
	}

	if (maxCol > maxRow)
	{
		cout << "column " << colIndex << " " << maxCol;
	}
	else if (maxCol == maxRow)
	{
		cout << "row " << rowIndex << " " << maxRow;
	}
	else if (maxCol < maxRow)
	{
		cout << "row " << rowIndex << " " << maxRow;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}