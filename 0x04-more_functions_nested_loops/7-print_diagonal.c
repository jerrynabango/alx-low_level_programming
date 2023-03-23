#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 *
 * @n: Indicates the number of times the diagonal is printed
 *
 * Return: Indicates successful execution
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0 ; a < n ; a++)
	{
		for (b = 0 ; b < a ; b++)
		{
			_putchar('_');
		}
		_putchar(92);

		if (a < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

