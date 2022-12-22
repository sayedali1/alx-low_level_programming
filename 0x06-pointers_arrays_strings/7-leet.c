#include "main.h"
/**/
char *leet(char *str)
{
    char code[] = {'a', '4', 'e', '3', 'o', '0', 't', '7', 'l', '1'};
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; code[j] != '\0'; j += 2)
        {
            if (str[i] == code[j] || str[i] == code[j] - 32)
            {
                str[i] = code[j + 1];
            }
        }
    }
    str[i - 1] = '\n';
    return (str);
}