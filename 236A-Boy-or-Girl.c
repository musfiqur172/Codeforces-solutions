#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    fgets(str, sizeof(str), stdin);
    char temp;

    int i, j, count;
    int n = strlen(str) - 1;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    count = n;

    for (i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
            count--;
    }

    printf("%s", count % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");

    return 0;
}