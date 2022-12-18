#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, val = 0;
    char op[4];
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf(" %[^\n]", op);
        op[1] == '+' ? val++ : val--;
    }

    printf("%d\n", val);
    return 0;
}