#include "lists.h"

/**
 * add_nodeint - A function that adds a new node @beginning of the list
 *
 * @head: Indicates the pointer to the listint
 *
 * @n: Indicates the int to new node
 *
 * Return: Displays the new added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t  *list;

	if (head == NULL)
	{
		return (NULL);
	}

	list = malloc(sizeof(listint_t));

	if (list == NULL)
	{
		return (NULL);
	}

	list->n = n;
	list->next = *head;
	*head = list;

	return (list);
}
