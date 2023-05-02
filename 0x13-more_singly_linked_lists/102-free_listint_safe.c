#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to head
 *
 * Return: size of freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int mem_diff;
	listint_t *temp;

	if (h == NULL)
		return (0);
	while (*h != NULL)
	{
		mem_diff = *h - (*h)->next;
		if (mem_diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;
	return (size);
}

