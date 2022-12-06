#include <stdio.h>

int main()
{
    int arr[101];
    int n, i, oddpos = 0, evenpos = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2)
        {
            oddpos += i;
        }
        else
        {
            evenpos += i;
        }
    }
    printf("%d", oddpos < evenpos ? oddpos : evenpos);

    return 0;
}