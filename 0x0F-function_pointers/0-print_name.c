#include <stdio.h>
#include "function_pointers.h"
/**
*print_name - fun that print a str
*@name: pointer to str
*@f: pointer to fun that take str and return void
*Return: void
*/

void print_name(char *name, void (*f)(char *))
{
    f(name);
}
