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
	int i;
	int j;
	int **ret;

	if (width < 1 || height < 1)
		return (NULL);
	ret = malloc(sizeof(*ret) * height);
	if (ret == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		ret[i] = malloc(sizeof(**ret) * width);
		if (ret[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ret[i]);
			free(ret);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			ret[i][j] = 0;
			j++;
		}
		i++;
	}

	return (ret);
}
