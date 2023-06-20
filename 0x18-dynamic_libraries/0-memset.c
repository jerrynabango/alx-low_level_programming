#include "main.h"
/**
 * _memset - A function that prints a block of memory with a particular value
 *
 * @s: Indicates a pointer
 *
 * @b: Indicates a character
 *
 * @n: Indicates a data type that stores values
 *
 * Return: Dispalys the block of memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0 ; a++)
	{
		s[a] = b;

		n--;
	}
	return (s);
}
