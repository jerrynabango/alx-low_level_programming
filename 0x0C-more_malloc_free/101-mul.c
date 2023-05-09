#include "main.h"
#include <stdlib.h>
/**
 * _print - A function that prints a string
 *
 * @str: Indicates a string
 *
 * @b: Indicates the string size
 *
 * Return: Empty
 */
void _print(char *str, int size)
{
	int string1, string2;

	string1 = string2 = 0;

	while (string1 < size)
	{
		if (str[string1] != '0')
		{
			string2 = 1;
		}
		if (string2 || string1 == size - 1)
		{
			_putchar(str[string1]);
		}
		string1++;
	}
	_putchar('\n');
	free(str);
}

