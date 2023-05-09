#include "main.h"
/**
 * _strspn - A function that gets the length of a prefix substring
 *
 * @s: Indicates the string
 *
 * @accept: Consists of bytes
 *
 * Return: Indicates the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	a = 0;

	while (*s)
	{
		for (b = 0 ; accept[b] ; b++)
		{
			if (*s == accept[b])
			{
				a++;
				break;
			}
			else
			{
				if (accept[b + 1] == '\0')
				return (a);
			}
		}
		s++;
	}
	return (a);
}
