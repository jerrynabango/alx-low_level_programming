#include "hash_tables.h"

/**
 * key_index - Function that gives you the index of a key.
 *
 * @key: Indicates the key
 *
 * @size: Indicates the size of the array of the hash table.
 *
 * Return: Index at which the key to be stored  in the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);  /*djb2 algorithm*/
}
