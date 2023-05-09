#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 *
 * @b: Indicates the constant byte
 *
 * @s: Indicates the memory adrress
 *
 * @n: Indicates the bytes of the momory area pointed by s
 *
 * Return: Displays the pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
