#include <stdio.h>

int main()
{
    int is_colored = 0, n, m, i, j;
    scanf("%d %d", &n, &m);

    char ch;
    char photo[100][100];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m && ch != '\n'; j++)
        {
            scanf(" %c", &photo[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m && ch != '\n'; j++)
        {
            ch = photo[i][j];
            if (ch == 'C' || ch == 'M' ||
                ch == 'Y')
            {
                is_colored = 1;
                break;
            }
        }
    }

    printf("%s", is_colored == 1 ? "#Color" : "#Black&White");
    return 0;
}