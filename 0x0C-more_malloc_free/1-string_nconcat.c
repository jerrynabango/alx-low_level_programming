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

	if (s1 == NULL)_
	{
		string1 = 0;
	}
	else
	{
		for (string1 = 0; s1[string1]; ++string1)
			;
	}

