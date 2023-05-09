#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function that prints numbers
 *
 * @separator: Indicates the string to be printed btn numbers
 *
 * @n: Indicates the number of in passed
 *
 * Return: Displays the printed numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int numbers;

	va_start(string, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (numbers = 0 ; numbers < n ; numbers++)
	{
		printf("%d", va_arg(string, int));
		if (numbers < n - 1)
		{
		printf("%s", separator);
		}
	}
	printf("\n");

	va_end(string);
}
