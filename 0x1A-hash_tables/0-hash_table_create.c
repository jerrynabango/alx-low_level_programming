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

	value = 0;

	key = malloc(sizeof(hash_table_t));
	if (key == NULL)
		return (NULL);

	key->size = size;
	key->array = malloc(sizeof(hash_node_t *) * size);
	if (key->array == NULL)
		return (NULL);
	while (value < size)
	{
		key->array[value] = NULL;
	}
		value++;

	return (key);
}
