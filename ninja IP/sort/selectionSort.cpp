#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // Rounds
    {

        int start = 0, end = n - 1, min, minIndex, val;
        min = arr[i];
        minIndex = i;
        for (int j = i + 1; j < n; j++) // min search
        {
            if (min > arr[j])
            {
                min = arr[j];
                minIndex = j;
            }
        }

        int temp = arr[i]; // swap
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}