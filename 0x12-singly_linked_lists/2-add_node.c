#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - A function that adds a new node
 *
 * @head: Indicates a head of list
 *
 * @str: Indicates the string
 *
 * Return: Displays the new node added
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
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

	node->next = (*head);
	node->str = strdup(str);
	(*head) = node;
	node->len = len;

	return (*head);
}
