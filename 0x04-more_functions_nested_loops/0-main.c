#include "main.h"
#include <stdio.h>

/**
 * main - Start of the program
 *
 * Return: Indicates successful execution
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));

	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
