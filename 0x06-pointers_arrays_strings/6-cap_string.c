#include "main.h"
/**
 * cap_string - Function that capitilizes all words of a string
 *
 * @c: The string represented
 *
 * Return: Refers to the string memory address
 */
char *cap_string(char *c)
{
	int a = 0;

	while (c[a])
	{
		while (!(c[a] >= 'a' && c[a] <= 'z'))
			a++;

		if (c[a - 1] == ' ' ||
				c[a - 1] == '\t' ||
				c[a - 1] == '\n' ||
				c[a - 1] == ',' ||
				c[a - 1] == ';' ||
				c[a - 1] == '.' ||
				c[a - 1] == '!' ||
				c[a - 1] == '?' ||
				c[a - 1] == '"' ||
				c[a - 1] == '(' ||
				c[a - 1] == ')' ||
				c[a - 1] == '{' ||
				c[a - 1] == '}' ||

				a == 0)
			c[a] -= 32;
		a++;
	}
	return (c);
}
