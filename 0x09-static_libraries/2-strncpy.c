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
	int string;

	string = 0;

	while (string < n && src[string] != '\0')
	{
		dest[string] = src[string];
		string;
	}
	return (dest);
}
