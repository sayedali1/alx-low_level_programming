#include <stdio.h>
#include <stdlib>

int main(int ac, char *av[])
{
    if (ac == 2)
    {
        printf("%d\n", atoi(av[1]));
    }
    return (0);
}
