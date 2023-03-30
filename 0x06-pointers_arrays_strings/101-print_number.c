#include "main.h"
/**
 * print_number - function that prints an integer.
 *
 * @n: Integer printed
 *
 * Return: Empty
 */
void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		_putchar('_');
		a = -n;
	}
	if (a / 10 != 0)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + '0');
}
