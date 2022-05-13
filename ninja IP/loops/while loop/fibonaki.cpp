#include <iostream>
using namespace std;

int main()
{
    int n, F;
    cin >> n;

    int f1 = 0;
    int f2 = 1;

    cout << f1 << " ";
    cout << f2 << " ";

    for (int i = 0; i <= n; i++)
    {
        F = f1 + f2;
        f1 = f2;
        f2 = F;
        cout << F << " ";
    }
}