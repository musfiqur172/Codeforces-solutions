#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    if (n % 2)
    {
        printf("-1");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            if (i % 2)
            {
                printf("%d %d ", i + 1, i);
            }
        }
    }

    return 0;
}