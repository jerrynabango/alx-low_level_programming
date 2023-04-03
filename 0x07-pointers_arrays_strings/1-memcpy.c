#include "main.h"
/**
 * _memcpy - Function that copies memory area
 *
 * @dest: Indicates the destination of address
 *
 * @src: Indicates the memory
 *
 * @n: Indicates the bytes from memory area
 *
 * Return: Indicates the memory area coied from the function
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
