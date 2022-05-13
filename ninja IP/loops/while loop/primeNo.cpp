#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n..." << endl;
    cin >> n;

    int d = 2;
    bool divided = false;
    while (d < n)
    {
        if (n % d == 0)
        {
            cout << "Given Number is Not a Prime Number!" << endl;
            divided = true;
        }
        d++;
    }
    if(!divided){
        cout << "Given Number is a Prime Number" << endl;
    }
}