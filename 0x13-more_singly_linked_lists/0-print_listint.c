#include "lists.h"

/**
 * print_listint - A function that prints all elements of list
 *
 * @h: Indicates the listint
 *
 * Return: Displays the listint list
 */
size_t print_listint(const listint_t *h)
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
