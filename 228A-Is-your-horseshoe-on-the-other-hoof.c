#include <stdio.h>

int main()
{
    int arr[4], count = 0, i, j;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        if (arr[i] == arr[i + 1])
            count++;
    }

    printf("%d", count);
    return 0;
}