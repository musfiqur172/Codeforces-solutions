#include <stdio.h>

int main()
{
    int ara[5][5];
    int n, i, j;
    int sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &ara[i][j]);
        }
    }

    for (i = 0, j = n - 1; i < n; i++, j--)
    {
        sum += ara[i][i];
        if (i != n / 2 && j != n / 2)
        {
            sum += ara[i][j] + ara[i][n / 2] + ara[n / 2][i];
        }
    }

    printf("%d\n", sum);

    return 0;
}