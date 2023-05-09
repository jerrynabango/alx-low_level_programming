#include "main.h"
/**
 * _isupper - A function that prints the Uppercase of all letters
 *
 * @c: Indicates the characters
 *
 * Return: Displays the letters in Uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

