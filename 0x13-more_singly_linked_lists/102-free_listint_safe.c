#include "lists.h"

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

	if (!h || !*h)
	{
		return (0);
	}
	while (*h)
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
