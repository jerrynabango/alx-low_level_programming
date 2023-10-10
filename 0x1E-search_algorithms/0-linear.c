#include "search_algos.h"

/**
 * linear_search - function searches for value in array of int's using Linear
 *
 * @array: pointer to the first element of the array to search in
 *
 * @size: number of elements in array
 *
 * @value: value to search for
 *
 * Return: value not present in array or if NULL, your function must return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t algo = 0;

	if (array == NULL)
		return (-1);

	while (algo < size)
	{
		printf("Value checked array[%ld] = [%d]\n", algo, array[algo]);
		if (array[algo] == value)
			return (algo);
		algo++;
	}

	return (-1);
}
