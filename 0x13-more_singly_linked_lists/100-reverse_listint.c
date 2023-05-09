#include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list
 *
 * @head: Indicates a pointer to th listint_t
 *
 * Return: Displays the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL;
	listint_t *list = NULL;

	while (*head)
	{
		list = (*head)->next;

		(*head)->next = rev;

		rev = *head;

		*head = list;
	}
	*head = rev;
	return (*head);
}
