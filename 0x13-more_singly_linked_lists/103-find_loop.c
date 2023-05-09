#include "lists.h"

/**
 * find_listint_loop - A function that finds loop in list
 *
 * @head: Indicates the pointer to the listint
 *
 * Return: Displays the loop found
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop = head, *loop1 = head;

	if (!head)
	{
		return (NULL);
	}

	while (loop1 && loop && loop->next)
	{
		loop = loop->next->next;

		loop1 = loop1->next;

		if (loop == loop1)
		{
			loop1 = head;

			while (loop1 != loop)
			{
				loop1 = loop1->next;
				loop = loop->next;
			}

			return (loop);
		}
	}

	return (NULL);
}

