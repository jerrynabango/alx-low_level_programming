#include <stdio.h>
/**
 * main - A program that prints it's name
 *
 * @argc: Indicates the size of argv array
 *
 * @argv: Indicates array of size argc
 *
 * Return: Displays the name
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv[0]);

	return (0);
}

