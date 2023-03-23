#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers
 *
 * Return: Indicates successful execution
 */
void more_numbers(void)
{
	int a, ch;

	for (a = 0 ; a < 10 ; a++)
	{
		for (ch = 0 ; ch < 10 ; ch++)
		{
			if (ch >= 10)
				_putchar((ch / 10) + 48);
			_putchar((ch % 10) + 48);
		}
		_putchar('\n');
	}
}


