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
	int money, i, coins = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	/*check if input is positive*/
	if (money > 0)
	{
		i = 0;
		/*when money = 0 quite the loop*/
		while (money)
		{
			/*check before whe sub from the money*/
			if ((money - cents[i]) >= 0)
			{
				money -= cents[i];
				coins++;
			}
			else
			{
				/*go to the next element in cents*/
				i++;
			}
		}
		printf("%d\n", coins);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
