#include "main.h"
#include <stdlib.h>
/**
 * str_concat - A function that concatenates two strings
 *
 * @s1: Indicates the string with contents in memory space
 *
 * @s2: Indicates the string with cotwents in memory space
 *
 * Return: Displays the two  concantenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenate;
	int string1, string2, string3, string4;

	string3 = string4 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (string1 = 0 ; s1[string1] != '\0' ; string1++)
		;

		for (string2 = 0 ; s2[string2] != '\0' ; string2++)
			;

	concatenate = malloc((string1 * sizeof(*s1)) + (string2 * sizeof(*s2)) + 1);

	if (concatenate == NULL)
		return (NULL);

	string3 = 0;
	string4 = 0;

	while (string3 < (string1 + string2 + 1))
	{
		if (string3 < string1)
		{
			concatenate[string3] = s1[string3];
		}
		else
		{
			concatenate[string3] = s2[string4++];
		}
		string3++;
	}
	return (concatenate);
}

