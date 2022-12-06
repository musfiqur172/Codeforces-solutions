#include <stdio.h>

int main()
{
    int n, i, strlen, nltr;
    char word[1000];
    scanf("%d ", &n);

    while (n--)
    {
        fgets(word, sizeof(word), stdin);
        strlen = -1;
        for (i = 0; word[i] != '\0'; i++)
        {
            strlen++;
        }

        if (strlen > 10)
        {
            nltr = 0;
            for (i = 1; i < strlen - 1; i++)
            {
                nltr++;
            }
            printf("%c%d%c\n", word[0], nltr, word[strlen - 1]);
        }
        else
        {
            printf("%s\n", word);
        }
    }

    return 0;
}