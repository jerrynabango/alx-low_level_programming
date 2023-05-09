#include "lists.h"

/**
 * pop_listint - A function that deletes head node  of list
 *
 * @head: Indicates the pointer to the listint
 *
 * Return: Displays the deleted node
 */
int pop_listint(listint_t **head)
{
	int node;
	listint_t *list;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	list = *head;
	*head = list->next;
	node = list->n;
	free(list);

	return (node);
}
