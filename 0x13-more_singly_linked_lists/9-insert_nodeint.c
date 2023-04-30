#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts new node
 *
 * @head: Indicates the pointer to listint
 *
 * @idx: Indicates index of the list
 *
 * @n: Indicates the node
 *
 * Return: Displays the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *list, *node;
	unsigned int index;

	if (head == NULL)
	{
		return (NULL);
	}

	if (idx != 0)
	{
		list = *head;

		for (index = 0; index < idx - 1 && list != NULL; index++)
		{
			list = list->next;
		}

		if (list == NULL)
			return (NULL);
	}

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		*head = node;
		node->next = *head;

		return (node);
	}
	node->next = list->next;
	list->next = node;

	return (node);
}
