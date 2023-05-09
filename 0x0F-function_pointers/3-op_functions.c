#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Returns the sum
 *
 * @a: Indicates the first value
 *
 * @b: Indicates the second value
 *
 * Return: Displays the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference
 *
 * @a: Indicates the first value
 *
 * @b: Indicates the seond value
 *
 * Return: Displays the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product
 *
 * @a: Indicates the first value
 *
 * @b: Indicates the second value
 *
 * Return: Displays the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division
 *
 * @a: Indicates the first value
 *
 * @b: Indicates the second value
 *
 * Return: Displays the division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod- Returns the remainder of the division
 *
 * @a: Indicates the first value
 *
 * @b: Indicates the second value
 *
 * Return: Displays the remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
