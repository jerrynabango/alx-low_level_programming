#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns all its parameters
 *
 * @n: Indicates the number of parameters passed
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int parameters;
	int sum;
	va_list par;

	sum = 0;
	va_start(par, n);

	for (parameters = 0 ; parameters < n ; parameters++)
	{
		sum += va_arg(par, int);
	}
	va_end(par);

	return (sum);
}
