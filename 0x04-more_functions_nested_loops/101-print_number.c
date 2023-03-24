#include "main.h"

/**
 * print_number - a function that prints an integer.
 *
 * @n: The integer
 *
 * Return: indicates successful execution
 */
void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		a = -n;
		_putchar('_');
	}
	else
	{
		a = n;
	}
	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + '0');
}
