#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A fucntion that prints the calculations
 *
 * @argc: Indicates the array size of the argv
 *
 * @argv: Indicates the the array size of the argc
 *
 * Return: Displays the calculations result
 */
int main(int argc, char *argv[])
{
	int (*arithmetic)(int, int);

	if (argc != 4)
	{
		printf("Error\n:");

		exit(98);
	}
	arithmetic = get_op_func(argv[2]);

	if (!arithmetic)
	{
		printf("Error\n");

		exit(99);
	}
	printf("%d\n", arithmetic(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
