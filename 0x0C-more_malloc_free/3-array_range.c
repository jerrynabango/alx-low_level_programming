#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 *
 * @min: Indicates the least values of array
 *
 * @max: Indicates the highest values of array
 *
 * Return: Displays the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array, value1, value2;

	if (min > max)
	{
		return (NULL);
	}
	value2 = max - min + 1;

	array = malloc(sizeof(int) * value2);

	if (array == NULL)
	{
		return (NULL);
	}

	for (value1 = 0 ; min <= max ; value1++)
	{
		array[value1] = min++;
	}
	return (array);
}
