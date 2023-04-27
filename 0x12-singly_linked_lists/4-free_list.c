#include "lists.h"
#include <stdlib.h>

/**
 * free_list - A function that frees list
 *
 * @head: Indicates the pointer to the list
 *
 * Return: Empty
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
	}
	if (head->str)
	{
		free(head->str);
	}
	free(head);
}
