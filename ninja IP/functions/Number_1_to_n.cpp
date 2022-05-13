#include <iostream>
using namespace std;

void print_1_to_n(int a)
{
    for (int i = 1; i <= a; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    
    print_1_to_n(n); // Don't make any variable output to this void function as it doesn't return anything just write the function and it will work.
}