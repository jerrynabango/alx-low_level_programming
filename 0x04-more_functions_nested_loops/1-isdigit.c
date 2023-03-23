#include "main.h"

/**
 * _isdigit - function that checks for digit btn 0 & 9
 *
 * Return: Indicates successful execution if certain condition is met
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
