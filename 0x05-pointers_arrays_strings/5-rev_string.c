#include "main.h"
/**
 * rev_string - Function that reverses a string
 *
 * _putchar - Character
 *
 * @s: Character to check
 *
 * Return: Empty
 */
void rev_string(char *s)
{
	char c = s[0];
	int count = 0;
	int a;

	while (s[count] != '\0')
		count++;
	for (a = 0 ; a < count ; a++)
	{
		count--;
		c = s[a];
		s[a] = s[count];
		s[count] = c;
	}
}

