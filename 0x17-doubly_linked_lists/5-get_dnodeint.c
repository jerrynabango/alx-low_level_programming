#include "lists.h"

/**
 * get_dnodeint_at_index - Function returns nth node of dlistint_t linked list
 *
 * @head: Indciates a pointer  to the dlist
 *
 * @index: Indicates the index of the node in the list
 *
 * Return: nth node of the list || NULL if no node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int get_node = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	if (index == 0)
	{
		return (head);
	}
	while (get_node < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		head = head->next;
		get_node++;
	}
	return (head);
}
