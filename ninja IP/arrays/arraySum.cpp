#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int input[100];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += input[i];
    }
    cout << sum;
    return 0;
    // cout << input; // this will give use the memory location from where the arrays starts
}