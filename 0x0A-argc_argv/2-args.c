#include <stdio.gh>
#include "main.h"
/**
 * main - A program that prints all arguments it receives
 *
 * @argc: Indicates the size of argv array
 *
 * @argv: Indicates the array size of argc
 *
 * Return: Displays the arguments received
 */
int main(int argc, char *argv[])
{
	int argument;

	for (argument = 0 ; argument < argc ; argument++)
	{
		printf("%s\n", argv[argument]);
	}
	return (0);
}
