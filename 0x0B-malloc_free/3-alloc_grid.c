#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
	int **pointa, value1, value2;

	if (height < 1)
		return (NULL);
	if (width < 1)
		return (NULL);
	pointa = malloc(sizeof(*pointa) * height);
	if (pointa == NULL)
		return (NULL);

	value1 = 0;
	while (value1 < height)
	{
		pointa[value1] = malloc(sizeof(**pointa) * width);
		if (pointa[value1] == NULL)
		{
			for (value1-- ; value1 >= 0 ; value1--)
				free(pointa[value1]);
			free(pointa);
			return (NULL);
		}
		value2 = 0;
		while (value2 < width)
		{
			pointa[value1][value2] = 0;
			value2++;
		}
		value1++;
	}
	return (pointa);
}


