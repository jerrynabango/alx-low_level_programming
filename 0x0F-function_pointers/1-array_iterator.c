#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - A function that executes a function as a parameter
 *
 * @array: Indicates an array
 *
 * @size: Indicates the array size
 *
 * @action: Indicates a pointer
 *
 * Return: Empty
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t function;

	if (array && action)
	{
		function = 0;
	}
	while (function < size)
	{
		action(array[function]);
		function++;
	}
}
