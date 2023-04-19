#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that performs simple operations
 *
 * @argc: Indicates the array size of argv
 *
 * @argv: Indicates the size of argc array
 *
 * Return: Displays the operations
 */
int main(int argc, char *argv[])
{
	char *operator;
	int a, b;


	if (argc != 4)
	{
		printf("Error\n");

		exit(98);
	}

	a = atoi(argv[1]);
	operator = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");

		exit(99);
	}

	if ((*operator == '/' && b == 0) || (*operator == '%' && b == 0))
	{
		printf("Error\n");

		exit(100);
	}

	printf("%d\n", get_op_func(operator)(a, b));

	return (0);
}
