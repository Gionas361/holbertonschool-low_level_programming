#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 *
 * @size: size of a hashtable
 *
 * Return: idk yet.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	unsigned long int i;

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
	{
		return (NULL);
	}

	(*new_hash).size = size;
	(*new_hash).array = malloc(sizeof(hash_node_t *) * size);
	if ((*new_hash).array == NULL)
	{
		return (NULL);
	}

	return (new_hash);
}
