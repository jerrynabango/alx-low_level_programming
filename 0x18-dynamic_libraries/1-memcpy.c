#include "main.h"
/**
 * _memcpy - A function that copies memory block from one location to another
 *
 * @src: Indicates the memory block destination
 *
 * @dest: Indicates memory block storage
 *
 * @n: Indicates data values storage
 *
 * Return: Displays the memory block copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int memory1, memory2;

	memory1 = 0;
	memory2 = n;

	for (; memory1 < memory2 ; memory2++)
	{
		dest[memory1] = src[memory1];

		n--;
	}
	return (dest);
}
