#include "lists.h"

/**
 * sum_listint - A function that returns sum of all data(n)
 *
 * @head: Indicates the pointer to the listint
 *
 * Return: Displays the sum of all data(n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;

		head = head->next;
	}

	return (sum);
}
