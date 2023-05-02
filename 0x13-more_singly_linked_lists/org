#include "lists.h"

size_t print_listint_list(const listint_t *head);

/**
 * print_listint_list - A function to check the list
 *
 * @head: Indicates the pointer to the listint_t
 *
 * Return: Displays the printed list
 */
size_t print_listint_list(const listint_t *head)
{
	size_t list = 1;

	const listint_t *node, *temp;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}

	node = head->next;

	temp = (head->next)->next;

	while (temp)
	{
		if (node == temp)
		{
			node = head;

		while (node != temp)
		{
			list++;
			node = node->next;
			temp = temp->next;
		}

		node = node->next;

		while (node != temp)
		{
			list++;

			node = node->next;
		}

		return (list);
	}

	node = node->next;

	temp = (temp->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - A function that prints linked list
 *
 * @head: Indicates the pointer to the listint
 *
 * Return: Displays the listint
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t list, temp;

	list = print_listint_list(head);

	temp = 0;

	if (list == 0)
	{
		for (; head != NULL; list++)
		{
			printf("[%p] %d\n", (void *)head, head->n);

			head = head->next;
		}
	}

	else
	{
		for (temp = 0; temp < list; temp++)
		{
			printf("[%p] %d\n", (void *)head, head->n);

			head = head->next;
		}

		printf("->[%p] %d\n", (void *)head, head->n);
	}

	return (list);
}
