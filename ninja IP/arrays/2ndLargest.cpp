#include <iostream>
using namespace std;

int findSecondLargest(int *input, int n)
{
    if (n < 2)
    {
        return -2147483648;
    }

    int l = -2147483648, s = -2147483648;
    for (int i = 0; i < n; i++)
    {
        if (input[i] > l)
        {
            s = l;
            l = input[i];
        }
        if (input[i] > s && input[i] != l)
        {
            s = input[i];
        }
    }
    if (s == -2147483648)
    {
        return -2147483648;
    }
    else
    {
        return s;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        cout << findSecondLargest(input, size) << endl;

        delete[] input;
    }

    return 0;
}