#include "hash_tables.h"

/**
  * hash_table_set - function that adds an element to the hash table.
  *
  * @ht: hash table you want to add or update the key/value to.
  *
  * @key: Indicates it's the key. key can not be an empty string.
  *
  * @value: Indicates value associated with the key.
  *
  * Return: 1 if it succeeded, 0 otherwise.
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *element, *add_element;
	hash_node_t *hash, *hash_table;
	unsigned long int add;

	if ((ht == NULL) || (ht->array == NULL) || (key == NULL) ||
			(strlen(key) == 0) || (value == NULL))
		return (0);

	add = key_index((const unsigned char *) key, ht->size);
	hash_table = ht->array[add];
	add_element = strdup(value);
	if (add_element == NULL)
	{
		return (0);
	}
	while (hash_table != NULL)
	{
		if (strcmp(hash_table->key, key) == 0)
		{
			free(hash_table->value);
			hash_table->value = add_element;
			return (1);
		}
		hash_table = hash_table->next;
	}
	hash = malloc(sizeof(hash_node_t));
	element = strdup(key);
	if (hash == NULL || element == NULL)
	{
		free(add_element), free(element), free(hash);
		return (0);
	}
	hash->key = element;
	hash->value = add_element;
	hash->next = ht->array[add];
	ht->array[add] = hash;
	return (1);
}
