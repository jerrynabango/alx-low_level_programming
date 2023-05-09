#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - A function that adds node at the end of list
 *
 * @head: Indicates the head to the list
 *
 * @str: Indicates the string to the node
 *
 * Return: Displays the added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	list_t *node1 = *head;
	list_t *node;

	len = 0;

	while (str[len])
	{
		len++;
	}
	node = malloc(sizeof(list_t));

	if (!node)
	{
		return (NULL);
	}
	node->len = len;
	node->next = NULL;
	node->str = strdup(str);

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (node1->next)
	node1 = node1->next;
	node1->next = node;

	return (node);
}

