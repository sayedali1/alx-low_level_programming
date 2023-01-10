#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*strtow - fun that splite str into array of strings
*@str: str we want to splite
*Return: pointer to array of strings, NULL otherwise
*/
char **strtow(char *str)
{
    int len, word, flag, i, j,  k;
    char **strs;

    if (str == NULL)
    {
        return (NULL);
    }
    /* get num of words in the str */
    i = 0, flag = 0, word = 0;
    while (str[i] != '\0')
    {
        if (str[i - 1] == ' ' && str[i] != ' ')
        {
            flag = 1;
           
        }
        else if (str[i] == ' ' && flag == 1)
        {
            flag = 0;
            word++;
        }
        i++;
    }

    /* create memory size of words */
    strs = malloc(sizeof(char *) * word);

    if(strs == NULL)
    {
        return (NULL);
    }

    /* get the len of each word in the str */
    i = 0, flag = 0, word = 0, len = 0, j= 0;
    while (str[i] != '\0')
    {
        if (str[i - 1] == ' ' && str[i] != ' ')
        {
            flag = 1;
        }
        else if (str[i] == ' ' && flag == 1)
        {
            flag = 0;
        }
        if (flag == 1)
        {
            len++;
        }
        /* create memory size of len */
        if (flag == 0 && len > 0)
        {
            strs[j] = malloc(sizeof(char) * len + 2);

            if (strs[j] == NULL)
            {
                for (i = 0; i < j; i++)
                {
                    free(strs[i]);
                }
                free(strs);
                return(NULL);
            }
            len = 0;
            j++;
        }
        i++;
    }

    /* walk though str and copy each word in strs */
    i = 0 , flag = 0, j = 0, k = 0 ;
    while (str[i] != '\0')
    {
        
        if (str[i - 1] == ' ' && str[i] != ' ')
        {
            flag = 1;
        }
        else if (str[i] == ' ' && flag == 1)
        {
            flag = 0;
        }

        if (flag == 1)
        {
            strs[j][k++] = str[i]; 
            
        }

        if (str[i + 1] == ' ' && flag == 1)
        {
            strs[j][k] = '\0';
            j++;
            k = 0;
        }
        
        i++;
    }
    return (strs);
}
