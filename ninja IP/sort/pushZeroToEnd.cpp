#include <iostream>
using namespace std;

void pushZeroesEnd(int *input, int size) // here we're traversing the arr adn looking for nin zero elements if found than increse the counter and exchnage the value of the arr[count] to the index value
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (input[i] != 0)
        {
            input[count] = input[i];
            count++;
        }
    }

    while (count < size) // Till this the count will reach to the total of non zero so from here on we want  zeros so we did this here 
    {
        input[count] = 0;
        count++;
    }
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int size;

        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        pushZeroesEnd(input, size);

        for (int i = 0; i < size; i++)
        {
            cout << input[i] << " ";
        }

        cout << endl;
        delete[] input;
    }

    return 0;
}