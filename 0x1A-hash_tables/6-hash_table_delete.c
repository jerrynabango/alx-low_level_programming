#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int table;
	hash_node_t *value, *delete;
	hash_table_t *key = ht;

	for (table = 0; table < ht->size; table++)
	{
		if (ht->array[table] != NULL)
		{
			value = ht->array[table];
			while (value != NULL)
			{
				delete = value->next;
				free(value->key);
				free(value->value);
				free(value);
				value = delete;
			}
		}
	}
	free(key);
	free(key->array);
}
