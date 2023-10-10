#include "search_algos.h"

/**
 * advanced_binary_recursive - searches for value in sorted array using Binary
 *
 * @array: pointer to the first element of the array to search in
 *
 * @left: Indicates the position of the leftmost element
 *
 * @right: Indicates the position of the rightmost element
 *
 * @value: value to search for
 *
 * Return: Returns index, If value is not present or NULL, it returns -1
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t algo;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (algo = left; algo < right; algo++)
		printf("%d, ", array[algo]);
	printf("%d\n", array[algo]);

	algo = left + (right - left) / 2;
	if (array[algo] == value && (algo == left || array[algo - 1] != value))
		return (algo);
	if (array[algo] >= value)
		return (advanced_binary_recursive(array, left, algo, value));
	return (advanced_binary_recursive(array, algo + 1, right, value));
}

/**
 * advanced_binary - searches for value in sorted array using Advanced binary
 *
 * @array: pointer to the first element of the array to search in
 *
 * @size: number of elements in array
 *
 * @value: value to search for
 *
 * Return: Returns index, If value is not present or NULL, it returns -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
