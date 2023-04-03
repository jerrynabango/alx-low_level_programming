#include "main.h"
/**
 * _memset() - Function that fills memory with constant byte
 *
 * @b: the address of memory to print
 *
 * @s: First address
 *
 * @n: Indicates the bytes
 *
 * Return: Indicates the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while  (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
