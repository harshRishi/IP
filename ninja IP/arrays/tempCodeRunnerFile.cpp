void swapAlternate(int *arr, int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (size % 2 == 0)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        else
        {
            if (i == (size - 1))
            {
                break;
            }
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}