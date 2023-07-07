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
	unsigned long int value;

	key = malloc(sizeof(hash_table_t));
	if (key == NULL)
	{
		return (NULL);
	}
	key->size = size;
	key->array = malloc(sizeof(hash_node_t *) * size);
	if (key->array == NULL)
	{
		return (NULL);
	}
	for (value = 0; value < size; value++)
	{
		key->array[value] = NULL;
	}
	return (key);
}
