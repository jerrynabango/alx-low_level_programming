#include "lists.h"
#include <stdlib.h>

/**
 * list_len - A function that returns the number of elements
 *
 * @h: Indicates the pointer of list_len
 *
 * Return: Displays the number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
