#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a value..." << endl;
    cin >> x;

    int i = 1;

    while (i <= x)
    {
        cout << i << endl;
        i++;
    }
}