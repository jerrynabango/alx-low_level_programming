#include "main.h"
/**
 * _strchr - A function that locates a character in a string
 *
 * @s: Indicates the string character
 *
 * @c: Indicates the character
 *
 * Return: Displays the pointer to the first occurence of the character c
 *
 * Return(NULL): Displays if character is not found
 *
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	{
		if (c == '\0')
		return (s);
	}
	return (NULL);
}
