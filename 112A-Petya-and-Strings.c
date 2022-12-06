#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char str1[102], str2[102];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int flag = 0;

    for (int i = 0; i < strlen(str1) - 1; i++)
    {
        if (tolower(str1[i]) < tolower(str2[i]))
        {
            flag = -1;
            return;
        }
        else if (tolower(str1[i]) > tolower(str2[i]))
        {
            flag = 1;
            return;
        }
    }

    printf("0\n", flag);

    return 0;
}