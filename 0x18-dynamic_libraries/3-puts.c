#include "main.h"
/**
 * _puts - A function that prints the string
 *
 * @s: Indicates the string
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
