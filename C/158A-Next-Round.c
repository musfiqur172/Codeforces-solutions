#include <stdio.h>

int main()
{
    int i, n, k, total = 0;

    scanf("%d %d", &n, &k);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            break;
        if (arr[i] >= arr[k - 1])
            total++;
    }

    printf("%d\n", total);

    return 0;
}