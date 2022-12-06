#include <stdio.h>
int main()

{
    int n, h, a, w = 0;
    scanf("%d %d", &n, &h);
    while (n--)
    {
        scanf("%d", &a);
        w += a <= h ? 1 : 2;
    }
    printf("%d", w);

    return 0;
}