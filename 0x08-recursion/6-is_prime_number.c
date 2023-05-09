#include "main.h"

/**
 * value - Indicates if the integer is a prime number
 *
 * @num1: Indicates integer
 *
 * @num2: Indicates integer
 *
 * Return: Displays the prime number
 */
int value(int num1, int num2)
{
	if (num2 < 2 || num2 % num1 == 0)
	{
		return (0);
	}
	else if (num1 > num2 / 2)
	{
		return (1);
	}
	else
	{
		return (value(num1 + 1, num2));
	}

}

/**
 * is_prime_number - A function returns 1 if input integer is a prime number
 *
 * @n: Indicates integer
 *
 * Return: Dispalys the prime number
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (0);
	}
	return (value(2, n));
}
