#include "lists.h"

/**
 * print_dlistint - A function that prints all elements of a dlistint_t list.
 *
 * @h: Indicates a pointer to a dlistint_t
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t list = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		list++;
	}
	return (list);
}
