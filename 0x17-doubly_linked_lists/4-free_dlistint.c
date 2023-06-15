#include "lists.h"

/**
 * free_dlistint - A function that frees a dlistint_t list.
 *
 * @head: Indicates a pointer to the dlistint_t
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
