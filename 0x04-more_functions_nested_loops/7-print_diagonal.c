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

	if (n <= 0)
		_putchar('\n');
	for (a = 0 ; a < n ; a++)
	{
		for (b = 0 ; b < a ; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

