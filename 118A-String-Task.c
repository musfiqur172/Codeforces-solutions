#include <stdio.h>
#include <string.h>

int main()
{
    char s[102];

    fgets(s, sizeof(s), stdin);

    int i;

    for (i = 0; i < strlen(s) - 1; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
        if (!(s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i'))
        {
            printf(".%c", s[i]);
        }
    }
    return 0;
}