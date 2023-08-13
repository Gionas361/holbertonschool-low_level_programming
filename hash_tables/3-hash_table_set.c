#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @key: The key of the hashtablef.
 * @value: the value for the key.
 * @ht: the hash table that will be edited
 *
 * Return: that.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newKEY;
	char *value2;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	value2 = strdup(value);
	if (value2 == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, (*ht).size);
	for (i = index; (*ht).array[i]; i++)
	{
		if (strcmp((*(*ht).array[i]).key, key) == 0)
		{
			free((*(*ht).array[i]).value);
			(*(*ht).array[i]).value = value2;
			return (1);
		}
	}
	newKEY = malloc(sizeof(hash_node_t));
	if (newKEY == NULL)
	{
		free(value2);
		return (0);
	}
	(*newKEY).key = strdup(key);
	if ((*newKEY).key == NULL)
	{
		free(newKEY);
		return (0);
	}
	(*newKEY).value = value2;
	(*newKEY).next = (*ht).array[index];
	(*ht).array[index] = newKEY;
	return (1);
}
