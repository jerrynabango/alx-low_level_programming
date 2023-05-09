#include "main.h"

/**
 * _puts_recursion - A function that prints a string
 *
 * @s: Indicates a string
 *
 * Return: Empty
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}

}
