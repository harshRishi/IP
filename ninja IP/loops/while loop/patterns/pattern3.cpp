#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter N" << endl;
    cin >> n;

    int i = 1;
    int prev = 1;
    while (i <= n)
    {
        int k = 1;
        while (k <= (n - i))
        {
            cout << " " << "\t";
            k++;
        }

        int j = 1;
        while (j <= i)
        {
            cout << prev << "\t";
            j++;
            prev++;
        }
        cout << endl;
        i++;
    }
}