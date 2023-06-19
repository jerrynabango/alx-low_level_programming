#include "main.h"
#include <stddef.h>
/**
 * _strchr - A function that prints the occurence of a character in a string
 *
 * @s: Indicates a pointer
 *
 * @c: Indicates a character
 *
 * stddef - Defines null pointer  constant
 *
 * Return: Dispalys the chracter occurence
 */
char *_strchr(char *s, char c)
{
	int letter;

	letter = 0;

	for (; s[letter] >= '\0' ; letter++)
	{
		if (s[letter] == c)
			return (&s[letter]);
	}
		return (0);
}
