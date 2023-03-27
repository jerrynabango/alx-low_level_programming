#include "main.h"
/**
 * print_rev - Function that prints string in reverse
 *
 * @s: Parameter
 *
 * Return: String
 */
void print_rev(char *s)
{
	int a;
	int c = 0;

	while (s[c] != '\0')
		c++;

	for (a = c - 1 ; a >= 0 ; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
