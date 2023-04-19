#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that prints the opcodes of it's own
 *
 * @argc: Indicates the size of a argv array
 *
 * @argv: Indicatyes the array of size argc
 *
 * Return: Displays the printed opcodes
 */
int main(int argc, char *argv[])
{
	char *array;
	int function, main_func;

	if (argc != 2)
	{
		printf("Error\n");

		exit(1);
	}

	function = atoi(argv[1]);

	if (function < 0)
	{
		printf("Error\n");

		exit(2);
	}

	array = (char *)main;

	for (main_func = 0 ; main_func < function ; main_func++)
	{
		if (main_func == function - 1)
		{
			printf("%02hhx\n", array[main_func]);

			break;
		}

		printf("%02hhx ", array[main_func]);
	}
	return (0);
}
