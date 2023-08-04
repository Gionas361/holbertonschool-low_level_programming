#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node from the list.
 *
 * @head: the list given to us.
 * @index: the node they want
 *
 * Return: pointer to node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t noudes = 0;

	while (head)
	{
		noudes++;
		head = (*head).next;
		if (noudes == index)
		{
			return (head);
		}

	}

	return (NULL);
}