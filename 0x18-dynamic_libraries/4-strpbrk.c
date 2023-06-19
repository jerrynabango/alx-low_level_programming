#include "main.h"
/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 *
 * @s: Indicates the string character
 *
 * @accept: Indicates the bytes
 *
 * Return: Displays a pointer to the byte in s
 *
 * Return(NULL): Displays null if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0 ; accept[a] ; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return (0);
}

