#include <stdio.h>

int main()
{
    int n, arr[101], i, temp, flag = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    for (i = 0; i < n - 1; i += 2)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    for (i = 0; i < n; i++)
    {
        if (i + 1 == arr[i])
        {
            flag = -1;
            break;
        }
    }

    if (flag == -1)
    {
        printf("%d\n", flag);
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}