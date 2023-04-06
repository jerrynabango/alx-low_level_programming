#include "main.h"

/**
 * value - Indicates the sqaure root
 *
 * @num1: Indicates first value
 *
 * @num2: Indicates second value
 *
 * Return: Displays the square root
 */
int value(int num1, int num2)
{

	if (num1 * num1 == num2)
	{
		return (num1);
	}
	else if (num1 * num1 > num2)
	{
		return (-1);
	}
	return (value(num1 + 1, num2));
}

/**
 * _sqrt_recursion - A function that returns the natural square root of number
 *
 * @n: Indicates the actual number
 *
 * Return: Displays the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (value(1, n));
}
