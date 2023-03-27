#include "main.h"
/**
 * puts_half - Function that prints half of a string
 *
 * @str: Identifies character
 *
 * Return: Empty
 */
void puts_half(char *str)
{
	int a, n;

	a = 0;

	while (str[a] != '\0')
		a++;

	if (a + 1 % 2 != '0')
		n = (a - 1) / 2;
	else
		n = (a / 2);
	n++;

	for (a = n ; str[a] != '\0' ; a++)
		_putchar(str[a]);
	_putchar('\n');
}

