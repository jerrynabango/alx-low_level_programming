#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes a node at index
 *
 * @head: Indicates a pointer to listint_t
 *
 * @index: Indicates node index
 *
 * Return: Displays the deleted node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int del;
	listint_t *list = NULL, *node = *head;

	del = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node);

		return (1);
	}

	while (del < index - 1)
	{
		if (!node || !(node->next))
			return (-1);

		node = node->next;
		del++;
	}

	list = node->next;

	node->next = list->next;

	free(list);

	return (1);
}
