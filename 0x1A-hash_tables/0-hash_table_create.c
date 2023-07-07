#include "hash_tables.h"

/**
  * hash_table_create - Function that creates hash table.
  *
  * @size: Indicates the size of the array.
  *
  * Return: A pointer to the newly created hash table else NULL.
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int value = 0;
	hash_table_t *key;

	key = malloc(sizeof(hash_table_t));
	if (key == NULL)
		return (NULL);

	key->size = size;
	key->array = malloc(sizeof(hash_node_t *) * size);
	if (key->array == NULL)
	{
		return (NULL);
	}
	while (value < size)
	{
		key->array[value] = NULL;
		value++;
	}

	return (key);
}
