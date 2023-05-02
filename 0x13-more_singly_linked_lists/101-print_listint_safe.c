#include "lists.h"

/**
 * listint_t vers - A function to safe list
 *
 * @node: Indicates the pointer
 *
 * @temp: Indicates the pointer
 *
 * @list: Indicates the list
 *
 * Return: Displays the list
 */
const listint_t **vers(const listint_t **temp, size_t list,
		const listint_t *node)
{
	size_t ls;
	const listint_t **node1;

	node1 = malloc(list * sizeof(listint_t *));

	if (node1 == NULL)
	{
		free(temp);

		exit(98);
	}

	for (ls = 0; ls < list - 1; ls++)
	{
		node1[ls] = temp[ls];
	}

	node1[ls] = node;

	free(temp);

	return (node1);
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
	size_t ls, a;
	const listint_t **tem = NULL;

	a = 0;

	while (head != NULL)
	{
		for (ls = 0; ls < a; ls++)
		{
			if (head == tem[ls])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);

				free(tem);

				return (a);
			}
		}

		a++;

		tem = vers(tem, a, head);

		printf("[%p] %d\n", (void *)head, head->n);

		head = head->next;
	}

	free(tem);

	return (a);
}

