#include "lists.h"

/**
 * sum_dlistint - Function returns data of dlistint_t linked sum_list.
 *
 * @head: Indicates a pointer to the dlistint structure
 *
 * Return: Sum the data else 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *sum_list;
	int data = 0;

	for (sum_list = head; sum_list != NULL; sum_list = sum_list->next)
	{
		data += sum_list->n;
	}

	return (data);
}
