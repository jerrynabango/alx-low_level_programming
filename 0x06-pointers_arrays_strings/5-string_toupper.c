#include "main.h"
/**
 * string_toupper - function changes lowercase letters of string to uppercase
 *
 * @c : Character
 *
 * Return: Uppercase
 */
char *string_toupper(char *c)
{
	int a = 0;

	while (c[a] != '\0')
	{
		if (c[a] >= 'a' && c[a] <= 'z')
			c[a] = c[a] - 32;
		a++;
	}
	return (c);
}
