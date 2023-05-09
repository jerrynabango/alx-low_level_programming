#include "main.h"
/**
 * _strpbrk - A function that prints first char of 1st str & matches other str
 *
 * @s: Indicates the value
 *
 * @accept: Indicates the value
 *
 * Return: Indicates matching string characters
 */
char *_strpbrk(char *s, char *accept)
{
	int character;

	while (*s)
	{
		for (character = 0 ; accept[character] ; character++)
		{
			if (*s == accept[character])
				return (s);
			}
			s++;
		}
		return ('\0');
}
