#include <stdio.h>
#include "main.h"
/**
 * main - A program that prints the number of arguments passed into it
 *
 * @argc: Indicates the size of argv array
 *
 * @argv: Indicates the array of size argc
 *
 * Return: Displays the number of arguments passed
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
