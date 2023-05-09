#include "lists.h"

/**
 * free_listint - A function that frees a list
 *
 * @head: Indicates the pointer to listint_t
 *
 * Return: Empty
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while (head != NULL)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
