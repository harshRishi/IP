#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a Value.." << endl;
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if (isupper(ch))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
}