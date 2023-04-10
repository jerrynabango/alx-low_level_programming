#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - A program that multiplies two numbers
 *
 * @argc: Indicates the size of argv array
 *
 * @argv: Indicates the array size of argc
 *
 * Return: Displays the multiplied result
 */
int main(int argc, char *argv[])
{
	(void)argv;

	int number1, number2;

	if (argc < 3)
	{
		printf("Error\n");

		return (0);
	}
	else
	{
		number1 = atoi(argv[1]);
		number2 = atoi(argv[2]);

		printf("%d\n", number1 * number2);

		return (1);
	}
}
