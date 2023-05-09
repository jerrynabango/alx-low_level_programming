#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at the end of list
 *
 * @head: Indicates a pointer to the listint
 *
 * @n: Indicates the int
 *
 * Return: Displays the added node at the end of list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list, *node;

	if (head == NULL)
	{
		return (NULL);
	}

	list = malloc(sizeof(listint_t));

	if (list == NULL)
	{
		return (NULL);
	}

	list->next = NULL;
	list->n = n;

	if (*head == NULL)
	{
		*head = list;
		return (list);
	}

	node = *head;

	while (node->next != NULL)
	{
		node = node->next;
	}
	node->next = list;

	return (list);
}
