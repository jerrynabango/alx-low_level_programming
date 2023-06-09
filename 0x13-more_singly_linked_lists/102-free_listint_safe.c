#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - A function that frees a list
 *
 * @h: Indicates the pointer
 *
 * Return: Displays the freed list size
 */
size_t free_listint_safe(listint_t **h)
{
	int safe;
	listint_t *node;
	size_t list;

	list = 0;

	if (h == NULL)
	{
		return (0);
	}
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
