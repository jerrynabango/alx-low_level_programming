#include "main.h"
/**
 * _islower - Identify is the character is lowercase
 *
 * @c: will be identified
 * && - Means and - used when comparing two conditions
 * Return: Identifies if character c is lowercase otherwise it stops
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

