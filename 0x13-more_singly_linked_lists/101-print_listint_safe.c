#include "lists.h"

/**
 * print_listint_safe - ..
 *
 * @head: Indicates the pointer
 *
 * Return: Displays the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int list;
	const listint_t *node = head, *safe = head;

	list = 0;

	if (head == NULL)
		exit(98);

	while (safe != NULL)
	{
		printf("[%p] %d\n", (void *)safe, safe->n);
		list++;
		if (node && node->next)
			node = (node->next)->next;
		else
			node = NULL;

		safe = safe->next;

		if ((node == safe) && node != NULL)
		{
			safe = head;

			while (safe != node)
			{
				printf("[%p] %d\n", (void *)node, node->n);

				list++;

				safe = safe->next;

				node = node->next;
			}

			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}
	}
	return (list);
}
