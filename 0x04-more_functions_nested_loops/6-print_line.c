#include "main.h"

/**
 * print_line - unction that draws a straight line in the terminal.
 *
 * @n: Indicates the times the straight is printed
 *
 * Return: Indicates successful execution
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 1 ; a < n ; ia+)
	{
		_putchar('_');
	}
	_putchar('\n');
}
