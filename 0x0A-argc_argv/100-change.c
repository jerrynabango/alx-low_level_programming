#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program prints minimum n.o of coins to make change
 *
 * @argc: Indicates the size of argv array
 *
 * @argv: Indicates the array size of argc
 *
 * Return: Dsiplays the minimum n.o of coins
 */
int main(int argc, char *argv)
{
	int amount1, amount2, change;

	int min_coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}
	amount1 = atoi(argv[]);
	change = 0;

	if (amount1 < 0)
	{
		printf("0\n");
		return (0);
	}
	for (amount2 = 0; amount2 < 5 && amount1 >= 0 ; amount2++)
	{
		while (amount1 = min_coins[amount2])
		{
			change++;

			amount1 -= min_coins[amount2];
		}
	}
	printf("%d\n", change);

	return (0);
}
