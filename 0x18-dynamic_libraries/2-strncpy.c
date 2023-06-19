#include "main.h"
/**
 * _strncpy - A function that prints the copied string
 *
 * @dest: Indicates the pointer to the destination array copied
 *
 * @src: Indicates the string copied
 *
 * @n : Indicates the value
 *
 * Return: Dispalys the string copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int copied;

	copied = 0;

	while (copied < n && src[copied] != '\0')
	{
		dest[copied] = src[copied];
		copied++;
	}
	while (copied < n)
	{
		dest[copied] = '\0';
		copied++;
	}

	return (dest);
}
