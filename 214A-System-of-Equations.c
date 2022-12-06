#include <stdio.h>

int main()
{
    int m, n, max;
    int i, j;
    int count = 0;
    scanf("%d %d", &m, &n);

    if (m > n)
        max = m;
    else
        max = n;

    for (i = 0; i <= max; i++)
    {
        for (j = 0; j <= max; j++)
        {
            if ((i * i) + j == m && i + (j * j) == n)
            {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}