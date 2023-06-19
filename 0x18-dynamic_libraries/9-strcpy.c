#include "main.h"
/**
 * _strcpy - Function that copies the string pointed to by src
 *
 * @dest: pointer to the destination array to be copied. src
 *
 * @src: Indicates that src is a char pointer
 *
 * Return: Empty
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
