#include <stdio.h>
#include <stdlib.h>
/**
*main - the minimum number of coins to make change for an amount of money.
*@argc: count of the argc elements
*@argv: pointer to arg str
*Return: 1 if error, 0 otherwise
*/
int main(int argc, char *argv[])
{
	int cents[5] = {25, 10, 5, 2, 1};
	int money, i, count = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	if (money > 0)
	{
		i = 0;
		
		while (money)
		{
			if ((money - cents[i]) >= 0)
			{
				money -= cents[i];
				count++;
			}
			else
			{
				i++;
			}
		}
		printf("%d\n", count);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
