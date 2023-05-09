#include "main.h"

/**
 * _pow_recursion - A function that returns the value raised to the power
 *
 * @x: Indicates a values
 *
 * @y: Indicates the power the value is raised
 *
 * Return: Displays the value raised to the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
