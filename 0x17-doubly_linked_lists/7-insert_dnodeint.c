#include "lists.h"

/**
 * insert_dnodeint_at_index - Function inserts a node_index at a given position
 *
 * @h: Indicates a pointer to the dlist structure
 *
 * @idx: Indicates the index of the node_index node_index
 *
 * @n: Indicates the number of nodes
 *
 * Return: address of the node_index node_index, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new_node, *node_index;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;

		if (*h != NULL)
			(*h)->prev = new_node;

		*h = new_node;
		return (new_node);
	}

	node_index = *h;
	for (count = 0; count < idx - 1 && node_index != NULL; count++)
		node_index = node_index->next;

	if (node_index == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = node_index->next;
	new_node->prev = node_index;
	if (node_index->next != NULL)
		node_index->next->prev = new_node;
	node_index->next = new_node;
	return (new_node);
}
