#include "lists.h"

/**
 * free_dlistint - free's the alocated space of the list.
 *
 * @head: the list given to us.
 *
 * Return: pointer to node.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
