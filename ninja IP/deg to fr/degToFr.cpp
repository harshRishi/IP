#include <iostream>
using namespace std;

int main()
{
    int f;
    cout << "Enter the Value in fahrenheit" << endl;
    cin >> f;

    float c;
    c = (f - 32) * (5.0 / 9);
    cout << c << " degree";
}