#include "hash_tables.h"

/**
 * hash_table_get - gives index of a key
 * @key: The key of the hashtablef.
 * @ht: the hash tabe u want to loook for
 *
 * Return: that.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *noudes;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, (*ht).size);
	if (index >= (*ht).size)
	{
		return (NULL);
	}

	noudes = (*ht).array[index];
	while (noudes && strcmp((*noudes).key, key) != 0)
	{
		noudes = (*noudes).next;
	}

	return ((noudes == NULL) ? NULL : (*noudes).value);
}
