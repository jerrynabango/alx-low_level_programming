#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns nth node
 *
 * @head: Indicates the pointer to listint
 *
 * @index: Indicates the int
 *
 * Return: Displays the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	if (head == NULL)
	{
		return (NULL);
	}

	for (node = 0; node < index; node++)
	{
		head = head->next;
	}

	if (head == NULL)
	{
		return (NULL);
	}

	return (head);
}
