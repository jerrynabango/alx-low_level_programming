#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - A function that concatenates two strings
 *
 * @s1: Indicates a string
 *
 * @s2: Indicates a string
 *
 * @n: Indicates the integer
 *
 * Return: Displays the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int string1, string2, string3;

	if (s1 == NULL)
	{
		string1 = 0;
	}
	else
	{
		for (string1 = 0; s1[string1]; ++string1)
			;
	}
	if (s2 == NULL)
	{
		string2 = 0;
	}
	else
	{
		for (string2 = 0; s2[string2]; ++string2)
			;
	}
	if (string2 > n)
	{
		string2 = n;
	}
	concat = malloc(sizeof(char) * (string1 + string2 + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (string3 = 0 ; string3 < string1 ; string3++)
	{
		concat[string3] = s1[string3];
	}
	for (string3 = 0 ; string3 < string2 ; string3++)
	{
		concat[string3 + string1] = s2[string3];
	}
	concat[string1 + string2] = '\0';
	return (concat);
}
