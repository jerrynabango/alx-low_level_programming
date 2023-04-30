#include "lists.h"

/**
 * listint_len - A function that returns n.o of elements in list
 *
 * @h: Indicates the linked list
 *
 * Return: Displays the n.o of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t list = 0;

	while (h != NULL)
	{
		h = h->next;

		list++;
	}
	return (list);
}
