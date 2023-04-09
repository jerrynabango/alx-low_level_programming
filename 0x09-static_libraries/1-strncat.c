#include "main.h"
/**
 * _strncat - A function that concantenates sourc and destinatiin string
 *
 * @dest: Indicates the pointer to the destination array to be copied
 *
 * @src: Indicates the string to be copied
 *
 * @n: Indicates the value
 *
 * Return: Displayss the concantenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int string1, string2;

	string1 = 0;

	while (dest[string1] != '\0')
	{
		string1++;
	}
	while (string2 < n && src[string2] != '\0')
	{
		dest[string1] = src[string2];

		string1++, string2++;
	}
	dest[string1] = '\0';

	return (dest);
}
