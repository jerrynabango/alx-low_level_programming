#include "main.h"

/**
 * print_numbers - Checks for numbersbtn 0-9
 *
 * Return: Indicates successful execution
 */
void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

