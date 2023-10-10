#include "search_algos.h"

/**
 * jump_list - Searches a sorted singly linked ls of int's using list_1 search
 *
 * @list: A pointer to the head of the linked list to search.
 *
 * @size: The number of elements in the list.
 *
 * @value: The value to search for.
 *
 * Return: Return a pointer, If value is not present or NULL, returns NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *lists = list;
	size_t algo, jump;

	if (list == NULL)
		return (NULL);

	jump = sqrt((double) size);
	algo = list->index + jump;

	while (list != NULL)
	{
		if (list->index == algo)
		{
			printf("Value checked at index [%ld] = [%d]\n",
				list->index, list->n);
			if (list->n < value && list->next)
			{
				lists = list;
				algo = algo + jump;
			}
			else
			{
				break;
			}
		algo = algo < size ? algo : size - 1;
		}
		list = list->next;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			lists->index, algo);
	for (; lists && lists->index <= algo &&
			lists->n <= value; lists = lists->next)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				lists->index, lists->n);
		if (lists->n == value)
			return (lists);
	}
	return (NULL);
}
