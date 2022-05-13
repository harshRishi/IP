#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter N" << endl;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int prev = i;
        while (j <= i)
        {
            cout << prev << "\t";
            prev++;
            j++;
        }
        cout << endl;
        i++;
    }
}