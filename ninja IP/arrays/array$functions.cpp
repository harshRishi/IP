#include <iostream>
using namespace std;

void func(int b[], int n) // very import store the size of array as well to execute func properly
{
    cout << "Here is the printed Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << "\t";
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[100];

    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    func(arr, n); // It's very Important to pass size (i.e 'n') of the array along with the array. So that it can be used in the function
}