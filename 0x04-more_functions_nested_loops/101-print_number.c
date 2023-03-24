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
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -1;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
