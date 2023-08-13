#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: the hash table in question
 *
 * Return: that.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *noude;
	unsigned long int i;
	unsigned char nextvalue = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < (*ht).size; i++)
	{
		if ((*ht).array[i] != NULL)
		{
			if (nextvalue == 1)
			{
				printf(", ");
			}

			noude = (*ht).array[i];
			while (noude != NULL)
			{
				printf("'%s': '%s'", (*noude).key, (*noude).value);
				noude = (*noude).next;
				if (noude != NULL)
				{
					printf(", ");
				}
			}
			nextvalue = 1;
		}
	}
	printf("}\n");
}
