#include "lists.h"

/**
 * print_listint_safe - ...
 *
 * @head: Indciates the pointer to the listint_t
 *
 * Return: Displays the list
 */
size_t print_listint_safe(const listint_t *head)
{
	long int list;
	size_t safe;

	safe = 0;

	while (head)
	{
		list = head - head->next;

		safe++;

		printf("[%p] %d\n", (void *)head, head->n);

		if (list > 0)
		{
			head = head->next;
		}

		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);

			break;
		}
	}

	return (safe);
}
