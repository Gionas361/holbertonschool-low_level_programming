#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: The key of the hashtablef.
 * @size: The size of the array of the hash table.
 *
 * Return: that.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
