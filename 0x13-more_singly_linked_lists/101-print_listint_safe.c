#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * listint_print - A function to safe list
 *
 * @safe1: Indicates the pointer
 *
 * Return: Displays the list
 */
size_t listint_print(const listint_t *safe1)
{
	size_t temp;
	const listint_t *node, *list;

	temp = 1;

	if (safe1 == NULL || safe1->next == NULL)
		return (0);

	node = safe1->next;
	list = (safe1->next)->next;

	while (list)
	{
		if (node == list)
		{
			node = safe1;
			while (node != list)
			{
				temp++;
				node = node->next;
				list = list->next;
			}
			node = node->next;

			while (node != list)
			{
				temp++;
				node = node->next;
			}

			return (temp);
		}
		node = node->next;
		list = (list->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - A function that prints list
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
			head = head->next;

		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);

			break;
		}
	}

	return (safe);
}
