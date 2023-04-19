#include "function_pointers.h"

/**
 * int_index - A fucntion that searches for an integer
 *
 * @array: Indciates the array
 *
 * @size: Indciates the array size
 *
 * @cmp: Indciates the pointer to the function
 *
 * Return: Displays the searched integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int src_int;

	src_int = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (src_int < size)
			{
				if (cmp(array[src_int]))
				{
					return (src_int);
				}
				src_int++;
			}
		}
	}
	return (-1);
}

