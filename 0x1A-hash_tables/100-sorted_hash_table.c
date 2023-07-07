#include "hash_tables.h"

/* function prototypes*/
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *table, const char *key, const char *value);
char *shash_table_get(const shash_table_t *table, const char *key);
void shash_table_print(const shash_table_t *table);
void shash_table_print_rev(const shash_table_t *table);
void shash_table_delete(shash_table_t *table);

/**
 * shash_table_create - Function for creating a hash table
 *
 * @size: Indicates the size of the hash table.
 *
 * Return: Indicates 1 if successful, otherwise 0
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int betty;

	betty = 0;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}

	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	while (betty < size)
	{
		table->array[betty] = NULL;
		betty++;
	}

	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * shash_table_set - Function to set a hash table entry
 *
 * @table: Indicates a pointer to a hash table entry.
 *
 * @key: Indicates a pointer to a hash table key entry.
 *
 * @value: Indicates a pointer to a hash table value entry.
 *
 * Return: Indicates 1 if successful, otherwise 0
 */
int shash_table_set(shash_table_t *table, const char *key, const char *value)
{
	shash_node_t *tables, *betty;
	unsigned long int set;
	char *hash;

	if (table == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}

	hash = strdup(value);
	if (hash == NULL)
	{
		return (0);
	}

	set = key_index((const unsigned char *)key, table->size);
	betty = table->shead;

	for (; betty != NULL; betty = betty->snext)
	{
		if (strcmp(betty->key, key) == 0)
		{
			free(betty->value);
			betty->value = hash;
			return (1);
		}
	}

	tables = malloc(sizeof(shash_node_t));
	if (tables == NULL)
	{
		free(hash);
		return (0);
	}
	tables->key = strdup(key);
	if (tables->key == NULL)
	{
		free(hash);
		free(tables);
		return (0);
	}
	tables->value = hash;
	tables->next = table->array[set];
	table->array[set] = tables;

	if (table->shead == NULL)
	{
		tables->sprev = NULL;
		tables->snext = NULL;
		table->shead = tables;
		table->stail = tables;
	}
	else if (strcmp(table->shead->key, key) > 0)
	{
		tables->sprev = NULL;
		tables->snext = table->shead;
		table->shead->sprev = tables;
		table->shead = tables;
	}
	else
	{
		betty = table->shead;
		while (betty->snext != NULL && strcmp(betty->snext->key, key) < 0)
		{
			betty = betty->snext;
		}
		tables->sprev = betty;
		tables->snext = betty->snext;
		if (betty->snext == NULL)
		{
			table->stail = tables;
		}
		else
		{
			betty->snext->sprev = tables;
		}

		betty->snext = tables;
	}

	return (1);
}

/**
 * shash_table_get - Function for getting a hash table entry.
 *
 * @table: Indicates a pointer to a hash table entry.
 *
 * @key: Indicates a pointer to a hash table key value pair.
 *
 * Return: The hash table entry associated with the key value, else NULL.
 */
char *shash_table_get(const shash_table_t *table, const char *key)
{
	shash_node_t *h_table;
	unsigned long int set;

	if (table == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	set = key_index((const unsigned char *)key, table->size);
	if (set >= table->size)
	{
		return (NULL);
	}
	h_table = table->shead;
	for (; h_table != NULL && strcmp(h_table->key, key) != 0;
	h_table = h_table->snext)
	{

	}

	return ((h_table == NULL) ? NULL : h_table->value);
}

/**
 * shash_table_print - Function for printing the hash table table structure.
 *
 * @table: Indicates a pointer to the hash table structure.
 *
 * Return: nothing.
 */
void shash_table_print(const shash_table_t *table)
{
	shash_node_t *h_table;

	if (table == NULL)
	{
		return;
	}
	h_table = table->shead;
	printf("{");
	for (; h_table != NULL; h_table = h_table->snext)
	{
		printf("'%s': '%s'", h_table->key, h_table->value);
		if (h_table->snext != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Function to print a hash table in reverse order.
 *
 * @table: Indicates a pointer to the hash table structure.
 *
 * Return: nothing.
 */
void shash_table_print_rev(const shash_table_t *table)
{
	shash_node_t *h_table;

	if (table == NULL)
	{
		return;
	}
	h_table = table->stail;
	printf("{");
	for (; h_table != NULL; h_table = h_table->sprev)
	{
		printf("'%s': '%s'", h_table->key, h_table->value);
		if (h_table->sprev != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - Function to delete a hash table entry.
 *
 * @table: Indicates a pointer to the hash table structure.
 *
 * Return: nothing.
 */
void shash_table_delete(shash_table_t *table)
{
	shash_node_t *h_table, *betty;
	shash_table_t *head = table;

	if (table == NULL)
	{
		return;
	}

	for (h_table = table->shead; h_table != NULL; h_table = betty)
	{
		betty = h_table->snext;
		free(h_table->key);
		free(h_table->value);
		free(h_table);
	}

	free(head->array);
	free(head);
}

