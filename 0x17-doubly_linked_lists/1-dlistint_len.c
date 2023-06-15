#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - A function returns n.o of elements in linked list
 *
 * @h: Idicates a pointer to the list
 *
 * Return: n.o of elements in linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t linked_list = 0;

	while (h != NULL)
	{
		h = h->next;
		linked_list++;
	}

	return (linked_list);
}
