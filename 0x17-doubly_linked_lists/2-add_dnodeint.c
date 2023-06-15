#include "lists.h"

/**
 * add_dnodeint - A function adds node at the beginning of dlistint_t list
 *
 * @n: Indicates the number of nodes in the list
 *
 *@head: Indicates the pointer to the dlistint
 *
 * Return: the address of the node element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->prev = NULL;
	node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = node;
	}

	*head = node;

	return (node);
}
