#include "lists.h"

/**
 * free_listint2 - A function that frees a list
 *
 * @head: Indiocates a pointer to the listint_t
 *
 * Return: Empty
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		list = (*head)->next;
		free(*head);
		*head = list;
	}
}
