#include <iostream>
using namespace std;

int main()
{
    int n;
    // cout << "Enter the Value of N" << endl;
    cin >> n;

    int i = 2;
    int sum = 0;
    while (i <= n)
    {
        if ((i % 2) == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    cout << sum << endl;
    // cout << "Total sum of All Even numbers till " << n << " is " << sum << endl;
}