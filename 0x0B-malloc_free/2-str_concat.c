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
	int string1, string2, string3, string4, string5;

	string3 = string4 = 0;

	if (s1 != NULL)
	{
		string1 = 0;
		while (s1[string1++] != '\0')
		{
			string3++;
		}
	}

	if (s2 != NULL)
	{
		string1 = 0;
		while (s2[string1++] != '\0')
		{
			string4++;
		}
	}
	string5 = string3 + string1;

	concatenate = (char *)malloc(sizeof(char) * (string5 + 1));

	if (concatenate == NULL)
	{
		return (NULL);
	}

	for (string1 = 0 ; string1 < string3 ; string1++)
	{
		concatenate[string1] = s1[string1];
	}

	for (string2 = 0 ; string2 < string4 ; string1++, string2++)
	{
		concatenate[string1] = s2[string2];
	}
	concatenate[string5] = '\0';

	return (concatenate);
}

