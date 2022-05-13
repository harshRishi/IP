#include <iostream>
using namespace std;

int main()
{
    int s, e, w;
    cout << "Enter Start End and Gap value for this coverter." << endl;
    cin >> s;
    cin >> e;
    cin >> w;

    while (s <= e)
    {
        int c;
        c = (s - 32) * (5.0 / 9);
        cout << s << " " << c << endl;
        s = s + w;
    }
}