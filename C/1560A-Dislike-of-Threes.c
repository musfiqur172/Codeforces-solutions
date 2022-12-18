#include <stdio.h>

int main()
{
    int T, n, num;

    scanf("%d", &T);

    while (T--)
    {
        scanf("%d", &n);
        num = 1;
        while (1)
        {

            if (num % 3 != 0 && num % 10 != 3)
            {
                n--;
                if (n == 0)
                {
                    printf("%d\n", num);
                    break;
                }
            }
            num++;
        }
    }
    return 0;
}