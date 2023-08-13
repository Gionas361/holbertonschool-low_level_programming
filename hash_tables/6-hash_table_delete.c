#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table in question
 *
 * Return: that.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *noude, *temp;
	unsigned long int i;

	for (i = 0; i < (*ht).size; i++)
	{
		if ((*ht).array[i] != NULL)
		{
			noude = (*ht).array[i];
			while (noude != NULL)
			{
				temp = (*noude).next;
				free((*noude).key);
				free((*noude).value);
				free(noude);
				noude = temp;
			}
		}
	}
	free((*head).array);
	free(head);
}
