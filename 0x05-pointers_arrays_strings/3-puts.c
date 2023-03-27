#include "main.h"
/**
 * _puts - Function that prints the strings
 *
 * @str: Parameter
 *
 * Return: Empty
 */
void _puts(char *str)
{
	int a;

	for (a = 0 ; str[a] != '\0' ; a++)
		_putchar(str[a]);
	_putchar('\n');
}
