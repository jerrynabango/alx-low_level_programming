#include "search_algos.h"

/**
 * interpolation_search - search for value in sorted array using Interpolation
 *
 * @array: pointer to the first element of the array to search in
 *
 * @size: number of elements in array
 *
 * @value:  value to search for
 *
 * Return: Returns index, If value is not present or NULL, it returns -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t algo, inter_1, inter_2 = size - 2;

	if (array == NULL)
		return (-1);

	while (inter_2 >= inter_1)
	{
		algo = inter_1 + (((double)(inter_2 - inter_1) / (array[inter_2]
			- array[inter_1])) * (value - array[inter_1]));

		if (algo < size)
			printf("Value checked array[%ld] = [%d]\n", algo, array[algo]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", algo);
			break;
		}

		if (array[algo] == value)
			return (algo);

		if (array[algo] > value)
			inter_2 = algo - 1;
		else
			inter_1 = algo + 1;
	}

	return (-1);
}
