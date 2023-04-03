#include "main.h"
/**
 * _memcpy - Function that copies memory area
 *
 * @dest: Indicates the destination of address
 *
 * @src: Indicates the bytes
 *
 * @n: Indicates the bytes from memory area
 *
 * Return: Indicates the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
