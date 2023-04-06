#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string
 *
 * @s: Indicates a string
 *
 * Return: Displays the string length
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a++;
		a += _strlen_recursion(s + 1);
	}
	return (a);
}
