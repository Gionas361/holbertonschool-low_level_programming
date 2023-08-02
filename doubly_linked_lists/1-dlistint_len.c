#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Returns the number of nodes in a doubly linked list.
 *
 * @h: the list given to us
 *
 * Return: nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int noudes = 0;

	while (h)
	{
		noudes++;
		h = (*h).next;
	}

	return (noudes);
}