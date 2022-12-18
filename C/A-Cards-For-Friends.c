#include <stdio.h>

int main()
{
    int t, w, h, n, total;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d %d %d", &w, &h, &n);
        total = 1;
        while (w % 2 == 0)
        {
            total *= 2;
            w = w / 2;
        }
        while (h % 2 == 0)
        {
            total *= 2;
            h = h / 2;
        }

        if (n <= total)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}