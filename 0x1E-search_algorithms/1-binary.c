#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - function searches for value in sorted array using Binary
 *
 * @array: pointer to the first element of the array to search in
 *
 * @size: number of elements in array
 *
 * @value: value to search for
 *
 * Return: Returns value, If value is not present or NULL, it returns -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t sort_1 = 0, sort_2 = size - 1, i, algo;

	if (array == NULL)
		return (-1);

	while (sort_1 <= sort_2)
	{
		algo = sort_1 + (sort_2 - sort_1) / 2;

		printf("Searching in array: %d", array[sort_1]);
		for (i = sort_1 + 1; i <= sort_2; i++)
			printf(", %d", array[i]);
		printf("\n");

		if (array[algo] == value)
			return (algo);
		if (array[algo] > value)
			sort_2 = algo - 1;
		else
			sort_1 = algo + 1;
	}

	return (-1);
}
