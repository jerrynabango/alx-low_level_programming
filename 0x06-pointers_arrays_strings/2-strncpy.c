#include "main.h"
/**
 * _strncpy - Function that copies a string
 *
 * @dest: String destination
 *
 * @src: String
 *
 * @n: Value length
 *
 * Return: string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
