#include <iostream>
using namespace std;

int arrayRotateCheck(int *input, int size)
{
    int prev = input[0];
    for (int i = 1; i < size; i++)
    {
        int current = input[i];
        if (current < prev)
        {
            return i;
        }
        prev = current;
    }
    return 0;
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

        cout << arrayRotateCheck(input, size) << endl;
        delete[] input;
    }

    return 0;
}