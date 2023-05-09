#include "main.h"

/**
 * print_most_numbers - Identifies digits btn 0-9
 *
 * Return: Indicates successful execution
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58 ; ch++)
	{
		if (ch != 50)
		{
			if (ch != 52)
			{
				_putchar(ch);
			}
		}
	}
	_putchar('\n');
}
