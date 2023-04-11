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
	int string1, string2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
		string1 = string2 = 0;

	while (s1[string1] != '\0')
	{
		string1++;
	}
	while (s2[string2] != '\0')
	{
		string2++;
	concatenate = malloc(sizeof(char) * (string1 + string2 + 1));
	}
	if (concatenate == NULL)
		return (NULL);

	string1 = string2 = 0;
	while (s1[string1] != '\0')
	{
		concatenate[string1] = s1[string1];

		string1++;
	}
	while (s2[string2] != '\0')
	{
		concatenate[string1] = s2[string2];

		string1++, string2++;
	}
	concatenate[string1] = '\0';
	return (concatenate);
}
