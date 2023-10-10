#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 *
 * @list: pointer to the head of the skip list to search in
 *
 * @value: value to search for
 *
 * Return: Returns a pointer, If value is not present or NULL, it returns NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *skip_1 = list, *skip_2 = list;

	if (list == NULL)
		return (NULL);

	while (skip_2->next && skip_2->n < value)
	{
		if (skip_1->express == skip_2)
		{
			printf("Value checked at index [%ld] = [%d]\n",
				skip_2->index, skip_2->n);
			skip_1 = skip_2;
		}
		skip_2 = skip_2->express ? skip_2->express : skip_2->next;
	}

	if (skip_1->express == skip_2)
		printf("Value checked at index [%ld] = [%d]\n",
				skip_2->index, skip_2->n);

	printf("Value found between indexes [%ld] and [%ld]\n",
			skip_1->index, skip_2->index);

	while (skip_1 && skip_1->n <= value)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				skip_1->index, skip_1->n);
		if (skip_1->n == value)
			return (skip_1);
		skip_1 = skip_1->next;
	}

	return (NULL);
}
