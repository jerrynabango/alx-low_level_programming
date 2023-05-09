#include "main.h"
/**
 * _strcat - A function that concantenates source string and destination string
 *
 * @dest: Indicates pointer to the destination where value is taken
 *
 * @src: Indicates it's a pointer
 *
 * Return: NULL
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];

		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
