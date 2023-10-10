#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function searches for value in sorted array using Jump Search
 *
 * @array: pointer to the first element of the array to search in
 *
 * @size: number of elements in array
 *
 * @value:  value to search for
 *
 * Return: Returns index, If value is not present or NULL, it returns -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t algo = 0;
	size_t jump_1 = 0;
	size_t jump_2 = sqrt((double)size);

	if (array == NULL)
		return (-1);

	for (; jump_1 < size && array[jump_1] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump_1, array[jump_1]);
		algo = jump_1;
		jump_1 += jump_2;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", algo, jump_1);
	jump_1 = (jump_1 < size) ? jump_1 : size - 1;

	for (; algo <= jump_1 && array[algo] <= value; algo++)
	{
		printf("Value checked array[%ld] = [%d]\n", algo, array[algo]);
		if (array[algo] == value)
			return (algo);
	}

	return (-1);
}
