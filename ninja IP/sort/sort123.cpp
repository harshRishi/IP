#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *arr, int n)
{
    int count0 = 0, count2 = n - 1;

    for (int i = 0; i < n;)
    {
        if (arr[i] == 0)
        {
            int temp = arr[count0];
            arr[count0] = arr[i];
            arr[i] = temp;
            i++;
            count0++;
        }
        else if (arr[i] == 1)
        {
            i++;
        }
        else if (arr[i] == 2) // here we don't want to i to increase coz  we want to check for futher that with what value we have replaced the 2 with if it is one then increase the i if it is 0 then swap it with zero counter and increse i.
        {
            int temp = arr[count2];
            arr[count2] = arr[i];
            arr[i] = temp;
            count2--;
        }
    }
}

//////////////////////------------method 2 without sorting-----------/////////////////
// int i, count0 = 0, count1 = 0, count2 = 0;

// for (int i = 0; i < n; i++)
// {
//     if (arr[i] == 0)
//     {
//         count0++;
//     }
//     if (arr[i] == 1)
//     {
//         count1++;
//     }
//     if (arr[i] == 2)
//     {
//         count2++;
//     }
// }

// i = 0;

// while (count0 > 0)
// {
//     arr[i] = 0;
//     i++;
//     count0--;
// }

// while (count1 > 0)
// {
//     arr[i] = 1;
//     i++;
//     count1--;
// }

// while (count2 > 0)
// {
//     arr[i] = 2;
//     i++;
//     count2--;
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;

        cin >> size;
        int *arr = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        sort012(arr, size);

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        delete[] arr;
        cout << endl;
    }

    return 0;
}