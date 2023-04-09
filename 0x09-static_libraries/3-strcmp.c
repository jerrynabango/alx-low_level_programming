#include "main.h"
/**
 * _strcmp- a function - A function that compares characters of strings
 *
 * @s1: Indicates the value
 *
 * @s2: Indicates the value
 *
 * Return: Displayes the string comparison
 */
int _strcmp(char *s1, char *s2)
{
	int string;

	string = 0;

	while (s1[string] != '\0' && s2[string] != '\0')
	{
		if (s1[string] != s2[string])
		{
			return (s1[string] - s2[string]);
		}
		return (0);
	}
}
