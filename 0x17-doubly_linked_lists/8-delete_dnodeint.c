#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes node at index
 *
 * @head: Indicates a pointer to the dlist structure
 *
 * @index: Indictes index of the node that should be deleted
 *
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int delete_node = 0;
	dlistint_t *node_index;

	if (!head || !*head)
	{
		return (-1);
	}

	node_index = *head;
	if (index == 0)
	{
		*head = node_index->next;
		if (node_index->next != NULL)
		{
			node_index->next->prev = NULL;
		}
		free(node_index);
		return (1);
	}

	while (delete_node < index)
	{
		if (node_index->next == NULL)
		{
			return (-1);
		}
		node_index = node_index->next;
		delete_node++;
	}

	node_index->prev->next = node_index->next;
	if (node_index->next != NULL)
	{
		node_index->next->prev = node_index->prev;
	}
	free(node_index);
	return (1);

}
