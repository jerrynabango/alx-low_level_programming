#include "main.h"

/**
 * print_binary - A function that prints binary rep. of a number
 *
 * @n: Indicates the integer
 */
void print_binary(unsigned long int n)
{
	unsigned long int binary;
	int num1, num2;

	num2 = 0;

	for (num1 = 63; num1 >= 0; num1--)
	{
		binary = n >> num1;

		if (binary & 1)
		{
			_putchar('1');

			num2++;
		}

		else if (num2)
		{
			_putchar('0');
		}
	}

	if (!num2)
	{
		_putchar ('0');
	}
}
