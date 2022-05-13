#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int p = 1; p <= n; p++)
    {

        int t;
        cin >> t;

        bool isFound = false;

        int arr[t];
        for (int j = 0; j < t; j++) // array input
        {
            cin >> arr[j];
        }

        int X;
        cin >> X; // taking the case for X

        for (int i = 0; i < t; i++)
        {
            if (arr[i] == X)
            {
                cout << i;
                isFound = true;
            }
        }
        if (!isFound)
        {
            cout << -1;
        }

    }
}