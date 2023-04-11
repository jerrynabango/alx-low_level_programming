#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - A function that returns pointer to a 2 dimensional array of int
 *
 * @width: Indicates the array value
 *
 * @height: Indicates the array value
 *
 * free - Used to deallocates or free block of memory
 *
 * Return: Displays the pointer
 */
int **alloc_grid(int width, int height)
{
	int **pointer, grid, value1, value2;

	grid = height * width;

	if (grid <= 0)
		return (NULL);

	pointer = (int **)malloc(sizeof(int *) * height);

	if (pointer == NULL)
	{
		return (NULL);
	}
	for (value1 = 0 ; value1 < height ; value1++)
	{
		pointer[value1] = (int *)malloc(sizeof(int) * width);
		if (pointer[value1] == NULL)
		{
			for (value1-- ; value1 <= 0 ; value2--)
				free(pointer[value1]);
			free(pointer);
		return (NULL);
		}
	}
	for (value1 = 0 ; value1 < height ; value1++)
	{
		for (value2 = 0; value2 < width ; value2++)
		{
			pointer[value1][value2] = 0;
		}
	}

	return (pointer);
}

