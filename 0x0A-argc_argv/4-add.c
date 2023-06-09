#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * check_num - Identifies the number
 *
 * @str: Indicates a string
 *
 * Return: Displays the number checked
 */
int check_num(char *str)
{
	unsigned int check;

	check = 0;

	while (check < strlen(str))
	{
		if (!isdigit(str[check]))
		{
			return (0);
		}
		check++;
	}
	return (1);
}

/**
 * main - A program that adds positive numbers
 *
 * @argc: Inicates the size of argv array
 *
 * @argv: Indicates the array size of argc
 *
 * Return: Displays the addded numbers
 */
int main(int argc, char *argv[])
{
	int check, converter, addition;

	check = 1;
	addition = 0;

	while (check < argc)
	{
		if (check_num(argv[check]))
		{
			converter = atoi(argv[check]);
			addition += converter;
		}
		else
		{
			printf("Error\n");

			return (1);
		}
		check++;
	}
	printf("%d\n", addition);

	return (0);
}

