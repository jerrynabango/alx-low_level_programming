#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - A function that prints strings
 *
 * @separator: Indicates the string to be printed btn strings
 *
 * @n: Indicates the number of strings passed to the function
 *
 * Return: Displays printed string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strn;
	unsigned int number;
	char *string;

	va_start(strn, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (number = 0 ; number < n ; number++)
	{
		string = va_arg(strn, char*);
		if (string == NULL)
		{
		string = "(nil)";
		}
		printf("%s", string);
		if (number < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(strn);
}
