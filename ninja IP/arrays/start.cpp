#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int input[100];
    for (int i = 0; i < n; i++) // making an array
    {
        cin >> input[i];
    }

    int max = INT_MIN;
    for (int i = 0; i < n; i++) // printing the array
    {
        int element = input[i];
        if (element > max)
        {
            max = element;
        }
    }
    cout << max;
    return 0;
}