#include "lists.h"

/**
 * add_dnodeint_end -Function that adds list node at the end of dlistint_t list
 *
 * @head: Indicates the pointer to the end of dlistint_t list
 *
 * @n: Indicates the number of nodes in the list
 *
 * Return: the address of the list element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *list, *add_node;

	if (head == NULL)
	{
		return (NULL);
	}
	list = malloc(sizeof(dlistint_t));
	if (list == NULL)
	{
		return (NULL);
	}
	list->n = n;
	list->next = NULL;

	if (*head == NULL)
	{
		list->prev = NULL;
		*head = list;
		return (list);
	}

	add_node = *head;
	for (; add_node->next != NULL; add_node = add_node->next)
		;

	add_node->next = list;
	list->prev = add_node;

	return (list);
}
