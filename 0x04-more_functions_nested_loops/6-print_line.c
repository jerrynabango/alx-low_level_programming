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
	int a;

	for (a = 0 ; a < n ; a++)
	{
		_putchar(95);
	}
	_putchar('\n');
}

