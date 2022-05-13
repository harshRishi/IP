#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    int i = 0;
    int count = 0;
    int p = nRows * nCols;
    int Rows = 0;
    int Cols = 0;
    int j = nCols;
    int k = nRows;
    int l = 0;
    //Write your code here
    for (int z = 0; count != p; z++)
    {

        for (i; i < j; i++)
        { //UPPER HORIZONTAL//
            cout << input[l][i] << " ";
            count++;
            if (count == p)
            {
                break;
            }
            if (i == j - 1)
            {
                break;
            }
        }
        Rows++;
        l++;
        if (count == p)
        {
            break;
        }
        for (l; l < k; l++)
        { //RIGHT VERTICAL//
            cout << input[l][i] << " ";
            if (count == p)
            {
                break;
            }
            count++;
            if (l == k - 1)
            {
                break;
            }
        }
        j--;
        i--;
        if (count == p)
        {
            break;
        }
        for (i; i >= Cols; i--)
        { //LOWER HORIZONTAL//
            cout << input[l][i] << " ";
            if (count == p)
            {
                break;
            }
            count++;
            if (i == Cols)
            {
                break;
            }
        }
        k--;
        l--;
        if (count == p)
        {
            break;
        }
        for (l; l >= Rows; l--)
        { //LEFT VERTICAL//
            cout << input[l][i] << " ";
            if (count == p)
            {
                break;
            }
            count++;
            if (l == Cols)
            {
                break;
            }
        }
        Cols++;
        l++;
        i++;
        if (count == p)
        {
            break;
        }
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
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}