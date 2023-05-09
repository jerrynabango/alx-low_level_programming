#include "main.h"

/**
 * _strlen_recursion - A function that Indicates the string length
 *
 * @s: Indicates the string
 *
 * Return: Dispalys the string length
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * palindrome - A function that identifies if the string is a palindrome or not
 *
 * @value1: Indicates value
 *
 * @value2: Indicates value
 *
 * @s: Indicates string to be identified
 *
 * Return: Dispalys palindrome if it's 1 else 0
 */

int palindrome(char *s, int value1, int value2)
{
	if (s[value1] == s[value2])

		if (value1 > value2 / 2)

			return (1);

		else

			return (palindrome(s, value1 + 1, value2 - 1));


	else
		return (0);


}

/**
 * is_palindrome - A function that returns 1 if string is palindrome else 0
 *
 * @s: Indicates a string
 *
 * Return: Displays 1 if string is palindrome else 0
 */

int  is_palindrome(char *s)
{
	return (palindrome(s, 0, _strlen_recursion(s) - 1));
}
