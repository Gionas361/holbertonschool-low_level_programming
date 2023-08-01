#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns the number of nodes/elements in a linked list.
 *
 * @h: the list given to us
 *
 * Return: nodes.
 */
size_t list_len(const list_t *h)
{
	size_t noudes = 0;

	while (h)
	{
		noudes++;
		h = (*h).next;
	}

	return (noudes);
}
