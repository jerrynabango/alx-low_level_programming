#include "hash_tables.h"

/**
 * hash_table_print -  Function that prints a hash table.
 *
 * @ht: Indicates the hash table to be printed to the console.
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hash;
	char print = 0;
	unsigned long int key;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	printf("{");
	for (key = 0; key < ht->size; key++)
	{
		hash = ht->array[key];

		for (; hash != NULL; hash = hash->next)
		{
			if (print == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", hash->key, hash->value);
			print = 1;
			}
	}

	printf("}\n");
}
