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
	hash_table_t *ht;
	unsigned long int value;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (value = 0; value < size; value++)
		ht->array[value] = NULL;

	return (ht);
}
