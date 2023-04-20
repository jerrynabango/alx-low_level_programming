#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - A function that prints anything
 *
 * @format: Indicates a list of types of arguments passed
 *
 * Return: Empty
 */
void print_all(const char * const format, ...)
{
	va_list any;
	char *string;
	int arg1, arg2;

	va_start(any, format);
	arg1 = 0;
	while (format != NULL && format[arg1] != '\0')
	{
		switch (format[arg1])
		{
			case 'c':
				printf("%c", va_arg(any, int));
				arg2 = 0;
				break;
			case 'i':
				printf("%i", va_arg(any, int));
				arg2 = 0;
				break;
			case 'f':
				printf("%f", va_arg(any, double));
				arg2 = 0;
				break;
			case 's':
				string = va_arg(any, char*);

				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				arg2 = 0;
				break;
			default:
				arg2 = 1;
				break;
		}
		if (format[arg1 + 1] != '\0' && arg2 == 0)
			printf(", ");
		arg1++;
	}
	printf("\n");
	va_end(any);
}
