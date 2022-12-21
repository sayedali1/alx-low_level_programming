#include "main.h"

char *string_toupper(char *low)
{
    int i;

    for (i = 0; low[i] != '\0'; i++)
    {
        if (low[i] <= 'z' && low[i] >= 'a')
            low[i] -= 32;
    }

    return (low);
}
