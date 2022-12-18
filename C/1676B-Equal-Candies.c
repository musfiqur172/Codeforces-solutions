#include <stdio.h>

int main()
{
    int t, n, i, a[51], min, sum, total;
    scanf("%d", &t);
    while (t--)
    {
        total = 0;
        sum = 0;
        min = 10000001;
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
            sum += a[i];
            if (a[i] < min)
                min = a[i];
        }
        total += sum - min * n;

        printf("%d\n", total);
    }
    return 0;
}