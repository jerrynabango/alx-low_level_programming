#include "hash_tables.h"

/**
  * hash_table_create - Function that creates hash table.
  *
  * @size: Indicates the size of the array
  *
  * Return: a pointer to the newly created hash table else NULL
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *key;
	hash_node_t **value;
	unsigned long int hash_t;

	key = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (key == NULL)
	{
		return (NULL);
	}

	value = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);

	if (value == NULL)
	{
		free(key);
		return (NULL);
	}

	for (hash_t = 0; hash_t < size; hash_t++)
	{
		value[hash_t] = NULL;
	}
	key->size = size;
	key->array = value;

	return (key);
}
