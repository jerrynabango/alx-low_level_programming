#include "main.h"
/**
 * _strcpy - A function that prints a copied str pointed to by src to dest
 *
 * @dest: Indicates pointer to the destination copied
 *
 * @src: Indicates  it's a character pointer
 *
 * Return: Displays the str copied
 */
char *_strcpy(char *dest, char *src)
{
	int str1, str2;

	str1 = 0;
	str2 = 0;

	while (*(src + str1) != '\0')
	{
		str1++;
	}
	for (; str2 < str1 ; str2++)
	{
		dest[str2] = src[str2];
	}
	dest[str1] = '\0';

	return (dest);
}
