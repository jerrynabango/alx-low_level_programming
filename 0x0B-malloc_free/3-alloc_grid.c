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
	int **value, grid1, grid2;

	if (height < 1)
	{
		return (NULL);
	}
	if (width < 1)
	{
		return (NULL);
	}

	value = malloc(sizeof(*value) * width);

	if (value == NULL)
	{
		return (NULL);
	}
	grid1 = 0;

	while (grid1 < height)
	{
		value[grid1] = malloc(sizeof(**value) * width);

		if (value[grid1] == NULL)
		{
			for (grid1-- ; grid1 >= 0; grid1--)
				free(value[grid1]);
			free(value);

			return (NULL);
		}
		grid2 = 0;
		while (grid2 < width)
		{
			value[grid1][grid2] = 0;
			grid2++;
		}
		grid1++;
	}
	return (value);
}
