#include "hash_tables.h"

/**
 * hash_table_get -  Function that retrieves a value associated with a key.
 *
 * @ht: Indicates the hash table you want to look into.
 *
 * @key: Indicates the key to retrieve from the hash table.
 *
 * Return: Value associated with the element, or NULL if key not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *retrieve;
	unsigned long int value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	value = key_index((const unsigned char *)key, ht->size);
	retrieve = ht->array[value];
	for (; retrieve != NULL; retrieve = retrieve->next)
	{
		if (strcmp(retrieve->key, key) == 0)
		{
			return (retrieve->value);
		}
	}

	return (NULL);
}
