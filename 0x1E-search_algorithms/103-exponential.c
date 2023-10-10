#include "search_algos.h"

/**
 * _binary_search - function searches for value in sorted array using Binary
 *
 * @array: pointer to the first element of the array to search in
 *
 * @left: Indicates the position of the leftmost element
 *
 * @expo: Indicates whether the size of the array
 *
 * @value: value to search for
 *
 * Return: Returns value, If value is not present or NULL, it returns -1
 */
int _binary_search(int *array, size_t left, size_t expo, int value)
{
	size_t algo;

	if (array == NULL)
		return (-1);

	for (; expo >= left;)
	{
		printf("Searching in array: ");
		for (algo = left; algo < expo; algo++)
			printf("%d, ", array[algo]);
		printf("%d\n", array[algo]);

		algo = left + (expo - left) / 2;
		if (array[algo] == value)
			return (algo);
		if (array[algo] > value)
			expo = algo - 1;
		else
			left = algo + 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for value in sorted array using Binary
 *
 * @array: pointer to the first element of the array to search in
 *
 * @size: number of elements in array
 *
 * @value: value to search for
 *
 * Return: Returns value, If value is not present or NULL, it returns -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t algo = 0, expo;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (algo = 1; algo < size && array[algo] <= value; algo = algo * 2)
			printf("Value checked array[%ld] = [%d]\n", algo, array[algo]);
	}

	expo = algo < size ? algo : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", algo / 2, expo);
	return (_binary_search(array, algo / 2, expo, value));
}
