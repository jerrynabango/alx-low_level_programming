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
	int compare;

	compare = 0;

	while (s1[compare] != '\0' && s2[compare] != '\0')
	{
		if (s1[compare] != s2[compare])
		{
			return (s1[compare] - s2[compare]);
		}
		compare++;
	}
		return (0);
}
