#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @n: Value length
 *
 * @dest: Value inserted destination
 *
 * @src: VAlue inserted
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (b < n && src[a] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
