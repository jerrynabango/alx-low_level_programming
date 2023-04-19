#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - A function that prints a name
 *
 * @name: Indicates a name of the person
 *
 * @f: Indicates the pointer
 *
 * Return: Empty
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
