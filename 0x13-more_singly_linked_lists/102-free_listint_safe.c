#include "lists.h"

/**
 * link - A function that links list
 *
 * @node: Indicates the pointer
 *
 * @list: Indicates the list
 *
 * @temp: Indicates the node size
 *
 * Return: Indicates the list
 */
listint_t **link(listint_t *temp, listint_t **node, size_t list)
{
	size_t list1;

	listint_t **safe;

	safe = malloc(list * sizeof(listint_t *));

	if (safe == NULL)
	{
		free(node);

		exit(98);
	}

	for (list1 = 0; list1 < list - 1; list1++)
	{
		safe[list1] = node[list1];
	}

	safe[list1] = temp;

	free(node);

	return (safe);
}

/**
 * free_listint_safe - A function that frees a list
 *
 * @h: Indicates the pointer
 *
 * Return: Displays the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	int safe;
	listint_t *node;
	size_t list;

	list = 0;

	if (h == NULL)
		return (0);

	while (*h != NULL)
	{
		safe = *h - (*h)->next;

		if (safe > 0)
		{
			node = (*h)->next;

			free(*h);

			*h = node;

			list++;
		}

		else
		{
			free(*h);

			*h = NULL;

			list++;

			break;
		}
	}

	*h = NULL;

	return (list);
}
